#include <iostream>
#include <fstream>
#include "overhead.h"

using namespace std;

const Complex operator+(const Complex& Ihs, const Complex& rhs){
    Complex result(Ihs);
    result.re += rhs.re;
    result.im += rhs.im;
    return result;
}//a friend function had same access privilege as member functions

const Complex operator-(const Complex& Ihs, const Complex& rhs){
    Complex result(Ihs);
    result.re -= rhs.re;
    result.im -= rhs.im;
    return result;
}

const Complex operator*(const Complex& Ihs, const Complex& rhs){
    Complex result;
    result.re = (Ihs.re*rhs.re) - (Ihs.im*rhs.im);
    result.im = (Ihs.im*rhs.re) + (Ihs.re*rhs.im);
    return result;
}

const Complex operator!(const Complex& c){
    return Complex(c.re, -c.im);
}

bool operator==(const Complex& Ihs, const Complex& rhs){
    return ((Ihs.re==rhs.re)&&(Ihs.im==rhs.im));
}

bool operator!=(const Complex& Ihs, const Complex& rhs){
     return !((Ihs.re==rhs.re)&&(Ihs.im==rhs.im));
}


istream& operator>>(istream& is, Complex& rhs){
    is >> rhs.re >> rhs.im;   //use friend function
    return is;
}


//put this implementation to overhead.h(declaration)
ostream& operator<<(ostream& os, Complex& rhs){
    os << rhs.real() << '+' << rhs.image() << 'i';  //use member function
    return os;
}

