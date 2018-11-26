/*
    CH08-320142
    a6_p3
    Kevin Silaj
    k.silaj@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(){}


Fraction::Fraction(const Fraction &f)
{
    this->nu = f.nu;
    this->des = f.des;
}

Fraction::Fraction(int nu, int des)
{
    this->nu = nu;
    this->des = des;
}

Fraction::Fraction(const std::string &str)
{
    string a = str.substr(0, str.find("/"));
    string b = str.substr(str.find("/") + 1);

    int c = atoi(a.c_str());
    int d = atoi(b.c_str());

    if((c < 0 && d > 0)||(c > 0 && d > 0))
    {
        this->nu = c;
        this->des = d;
    }
    else if((c < 0 && d < 0)||(c > 0 && d < 0))
    {
        this->nu = -c;
        this->des = -d;
    }
    else if(d == 0)  //the denominator cannot be 0
    {
        throw string("Invalid data or logical error");
    }
    else if(c == 0)
    {
        this->nu = 0;
    }

    this->print();
}

ostream& operator<<(ostream& os, const Fraction& f)
{
       os<<f.nu<<" / "<<f.des<<endl;
       return os;
}

istream& operator>>(istream &is, Fraction &f)
{
    int nu;
    int des;

    is>>nu;
    is>>des;

    while(des==0)
    {
        cout << "incorrect"; //if den = 0
        is>>des;
    }
    f.nu = nu;
    f.des = des;
    return is;
}

Fraction Fraction::operator*(Fraction f)
{
    int nu, des;
    nu = this->nu * f.nu;
    des = this->des * f.des;
    Fraction result(nu, des);
    return result;
}

Fraction Fraction::operator/(Fraction f)
{
    int nu, des;
    nu = this->nu * f.des;
    des = this->des * f.nu;
    Fraction result(nu, des);
    return result;
}

Fraction Fraction::operator+(Fraction f)
{

    Fraction a;
    a.nu = this->nu * f.des + f.nu * this->des;
    a.des = this->des * f.des;

    return a;

}

Fraction Fraction::operator-(Fraction f)
{
    Fraction a;
    a.nu = this->nu * f.des - f.nu * this->des;
    a.des = this->des * f.des;

    return a;
}

Fraction Fraction::operator=(const Fraction& f6)
{
    Fraction f;
    f.nu = f6.nu;
    f.des = f6.des;

    return f;
}

bool Fraction::operator<(const Fraction& f7)
{
    return (nu * f7.des < des * f7.nu);
}

bool Fraction::operator<=(const Fraction& f8)
{
    return (nu * f8.des <= des * f8.nu);
}

bool Fraction::operator>(const Fraction& f9)
{
    return (nu * f9.des > des * f9.nu);
}

bool Fraction::operator>=(const Fraction& f10)
{
    return (nu * f10.des >= des * f10.nu);
}

bool Fraction::operator==(const Fraction& f11)
{
    return (nu * f11.des == des * f11.nu);
}

bool Fraction::operator!=(const Fraction& f12)
{
    return (nu * f12.des != des * f12.nu);
}

void Fraction::print()
{
    std::cout << nu << " / " << des << std::endl;
}
