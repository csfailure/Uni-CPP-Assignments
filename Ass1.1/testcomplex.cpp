/*
CH08-320143
a1_p1.cpp (test)
Kevin Silaj
k.silaj@jacobs-university.de
*/
#include <iostream>
#include<fstream>
#include "Complex.h"

using namespace std;

int main(int argc, char** argv)
{
    //reading first file
    ifstream stream("in1.txt");
    if(!stream.is_open())
        return -1;

    Complex c1,c2,c3;

    stream >> c1;

    //same for the second file
    ifstream stream2("in2.txt");
    if(!stream2.is_open())
        return -1;

    stream2 >> c2;

    //reading the output file
    ofstream out("output.txt");
    if(!out.is_open())
        return -1;

    //print the complex numbers and the results when we run the program
    cout << c1 << c2 << endl << c1+c2 << c1-c2 << c1*c2;

    //print the results in the output.txt file
    out << c1+c2 << c1-c2 << c1*c2;

    stream.close();
    stream2.close();
    out.close();


    return 0;
}
