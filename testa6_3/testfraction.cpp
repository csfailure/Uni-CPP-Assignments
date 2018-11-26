#include <iostream>
#include <exception>
#include <sstream>
#include <algorithm>
#include "Fraction.h"
#include <string>

using namespace std;

//doing some tests if the operations are correct or incorrect
//by using test and intheend or result function
//example in test(f > ff) should be incorrect so in the result
//it is incorrect 1 and correct 0 and so on

int c = 0;
int inc = 0;

void test(bool bol)
{
    if (!bol)
    {
        inc++;
    }
    else
    {
        c++;
    }
}

void intheend()
{
    cout << "correct "<< c << endl;
    cout << "incorrect " << inc << endl;
}

int main()
{
    //two example fractions
    Fraction f(3,4);
    Fraction ff(1,4);

    //test relations
    test(f < ff); //c
    test(f > ff); //inc
    test(f <= ff); //c
    test(f == ff);
    test(f >= ff);
    test(f != ff);

    //test arithmetic
    test(f + ff == Fraction(16,16));
    test(f + ff == Fraction(13,16));
    test(f - ff == Fraction(9,16));
    test(f - ff == Fraction(8,16));
    test(f * ff == Fraction(3,16));
    test(f * ff == Fraction(13,14));
    test(f / ff == Fraction(12,4));
    test(f / ff == Fraction(20,15));



    //test  exceptions
    cout<<"test if nu/0 is logically wrong: "<<endl;
    try{
        Fraction f3("1/0");//incorrect
        inc++;
    }
    catch(string &str){
        cout << str << endl;
        c++;
    }

    Fraction fff(-14,10);
    test(fff == Fraction(-7,5));//correct


    //test output
    stringstream out;
    out << f;
    test(out.str() == "13/27"); //incorrect

    //test input
    stringstream in;
    in << "5 5";
    in >> ff;
    test(ff == Fraction(5,5)); //correct

    cout<< endl;

    intheend();
    return 0;
}
