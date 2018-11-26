/*
CH08-320143
a2_p1.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex()
{

};

Complex::Complex(double re, double imag)
{
    this->re = re;
    this->imag = imag;
}


bool Complex::operator==(const Complex& c)
{
     return this->re == c.re && this->imag == c.imag;
}

Complex::~Complex()
{
    cout << "Destructor called" << endl;
}
