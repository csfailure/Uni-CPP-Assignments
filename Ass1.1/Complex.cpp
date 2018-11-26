/*
CH08-320143
a1_p1.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/


#include<iostream>
#include<fstream>
#include "Complex.h"

using namespace std;

Complex::Complex()
{
    real=0;
    imag=0;
}

Complex::Complex(double re, double im): real(re) , imag(im)
{

}

Complex::~Complex()
{

}


Complex::Complex(const Complex& cx)
{

}

void Complex::setReal(double newreal)
{
    real=newreal;
}


void Complex::setImag(double newimag)
{
    imag=newimag;
}

void Complex::setComplex(double re, double im)
{
    real=re;
    imag=im;
}


double Complex::getReal()
{
    return real;
}

double Complex::getImag()
{
    return imag;
}

Complex Complex::add(Complex & c)
{
    double r;
    double i;
    r = real + c.getReal();
    i = imag + c.getImag();
    Complex add(r , i);
    return add;
}


Complex Complex::mul(Complex & c)
{
    double r;
    double i;
    r=(real*c.getReal()) - (imag*c.getImag());
    i=(imag*c.getReal()) + (real*c.getImag());
    Complex mul( r , i );
    return mul;
}


Complex Complex::sub(Complex & c)
{
    double r;
    double i;
    r = real-c.getReal();
    i = imag-c.getImag();
    Complex sub(r,i);
    return sub;
}

Complex Complex::operator+(const Complex& c)
{
    Complex comp;
    comp.real = this->real + c.real;
    comp.imag = this->imag + c.imag;
    return comp;
}

Complex Complex::operator-(const Complex& c)
{
    Complex comp;
    comp.real = this->real - c.real;
    comp.imag = this->imag - c.imag;
    return comp;
}

Complex Complex::operator*(const Complex& c)
{
    Complex comp;
    comp.real = this->real * c.real - this->imag * c.imag;
    comp.imag = this->imag * c.real + this->real * c.imag;
    return comp;
}

Complex& Complex::operator=(const Complex& c)
{
    this->real = c.real;
    this->imag = c.imag;
    return *this;
}

//cout operator
ostream& operator<<(ostream& out, const Complex& c)
{
    //the conditions of printing the complex number
    if(c.imag < 0 && c.imag != -1)
    {
        out << c.real << c.imag << "i" << endl;
    } else

        if(c.imag == 1)
        {
            out << c.real << "+i" << endl;
        } else
            if(c.imag == -1)
            {
                out << c.real << "-i" << endl;
            } else
                if(c.imag == 0)
                {
                    out << c.real << endl;
                } else
                    {
                        out << c.real << "+" << c.imag << "i" << endl;
                    }
    return out;
}

//cin operator
istream& operator>>(istream& in, Complex& c)
{
    in >> c.real >> c.imag;

    return in;
}
