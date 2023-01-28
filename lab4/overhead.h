#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex{
private:
    double re;
    double im;

public:
    Complex();
    Complex(double r, double i);
    friend const Complex operator+(const Complex& Ihs, const Complex& rhs);
    friend const Complex operator-(const Complex& Ihs, const Complex& rhs);
    friend const Complex operator*(const Complex& Ihs, const Complex& rhs);
    friend const Complex operator!(const Complex& c);
    friend bool operator==(const Complex& Ihs, const Complex& rhs);
    friend bool operator!=(const Complex& Ihs, const Complex& rhs);
    friend istream& operator>>(istream& is, Complex& rhs);
    friend ostream& operator<<(ostream& os, Complex& rhs);
    double real() const {return re;}
    double image() const {return im;}

    ~Complex();
};

//constructor
Complex::Complex(){}
Complex::Complex(double r=0, double i=0):re(r), im(i){}

//destructor
Complex::~Complex(){}

#endif