/*
CH08-320143
a2 p3.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Stack.h"


using namespace std;

int main()
{
    Stack<int> ints;
    int j;
    //in my test im pushing 5 integers
    //and then i am popping 2 integers
    //so it should print the integer 40
    //and the nr of integers in the stack which is 4
    ints.push(10);
    ints.push(20);
    ints.push(30);
    ints.push(40);
    ints.push(50);
    ints.push(60);

    ints.pop(j);
    ints.pop(j);

    int k = ints.back();
    cout << k << endl;
    int l = ints.getNumEntries();
    cout << l << endl;

    int m = ints.getSize();
    cout << m << endl;



    return 0;
}

