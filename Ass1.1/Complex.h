/*
CH08-320143
a1_p1.h
Kevin Silaj
k.silaj@jacobs-university.de
*/

using namespace std;


class Complex {

private:
    float real;
    float imag;

public:
    //empty const, destructor and const with parameters
    //and the copy constructor
    Complex();
    Complex( double, double=0);
    ~Complex();
    Complex (const Complex&);

    //setters
    void setReal(double);
    void setImag(double);
    void setComplex(double,double);

    //getters
    double getReal();
    double getImag();

    void print();

    Complex add(Complex&);
    Complex mul(Complex&);
    Complex sub(Complex&);

    //operator overload
    Complex operator+(const Complex& c);
    Complex operator-(const Complex& c);
    Complex operator*(const Complex& c);
    Complex& operator=(const Complex& c);
    friend ostream& operator<<(ostream& out, const Complex& c);
    friend istream& operator>>(istream& in, Complex& c);
};
