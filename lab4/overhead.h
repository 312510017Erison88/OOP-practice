#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex{
private:
    double re;
    double im;

public:
    Complex(){}
    Complex(double r, double i):re(r), im(i){}
    friend const Complex operator+(const Complex& Ihs, const Complex& rhs);
    friend const Complex operator-(const Complex& Ihs, const Complex& rhs);
    friend const Complex operator*(const Complex& Ihs, const Complex& rhs);
    friend const Complex operator!(const Complex& c);
    friend bool operator==(const Complex& Ihs, const Complex& rhs);
    friend bool operator!=(const Complex& Ihs, const Complex& rhs);
    friend istream& operator>>(istream& is, const Complex& rhs);
    friend ostream& operator<<(ostream& os, Complex& rhs);
    double real() const {return re;}
    double image() const {return im;}

    ~Complex(){}
};



#endif