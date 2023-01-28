#include <iostream>
#include <fstream>
#include "overhead.h"

using namespace std;

/*
//constructor
Complex::Complex(){}
Complex::Complex(double r=0, double i=0):re(r), im(i){}

//destructor
Complex::~Complex(){}
*/

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
    return Complex(-c.re, -c.im);
}

bool operator==(const Complex& Ihs, const Complex& rhs){
    return ((Ihs.re==rhs.re)&&(Ihs.im==rhs.im));
}

bool operator!=(const Complex& Ihs, const Complex& rhs){
     return !((Ihs.re==rhs.re)&&(Ihs.im==rhs.im));
}

istream& operator>>(istream& is, const Complex& rhs){
    Complex test(rhs);
    is >> test.re >> test.im;   //use friend function
    return is;
}

ostream& operator<<(ostream& os, const Complex& rhs){
    os << rhs.real() << '+' << rhs.image() << 'i';  //use member function
    return os;
}
