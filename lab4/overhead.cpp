#include <iostream>
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

istream& operator>>(istream& is, const Complex& rhs){
    is >> rhs.real() >> '+' >> rhs.image() >> 'i';
    return is;
}

ostream& operator<<(ostream& os, const Complex& rhs){
    os << rhs.real() << '+' << rhs.image() << 'i';
    return os;
}
