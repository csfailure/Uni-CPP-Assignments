/*
    CH08-320142
    a6_p3 (header)
    Kevin Silaj
    k.silaj@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Fraction {

private:
    int nu;
    int des;
    std::string f;
public:
    Fraction(); //empty
    Fraction(const Fraction&); //copy const
    Fraction(int, int = 1);
    Fraction(const std::string&);

    //operators
    Fraction operator+(Fraction f);
    Fraction operator-(Fraction f);
    Fraction operator*(Fraction f);
    Fraction operator/(Fraction f);
    Fraction operator=(const Fraction&);

    bool operator<(const Fraction&);
    bool operator<=(const Fraction&);
    bool operator>(const Fraction&);
    bool operator>=(const Fraction&);
    bool operator==(const Fraction&);
    bool operator!=(const Fraction&);

    friend ostream& operator<<(ostream&, const Fraction&);
    friend istream& operator>>(istream&, Fraction&);

    void print();
};
