/*
CH08-320143
a2_p1.h
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Complex
{
    private:
        double re;
        double imag;

    public:
        Complex(); //empty constructor
        Complex(double re, double imag);
        ~Complex(); //destructor
        bool operator ==(const Complex& c);
};
