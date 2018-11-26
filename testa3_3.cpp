/*
CH08-320143
a3 p3.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <list>
#include <algorithm>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    list<int> A;
    list<int> B;
    int number;

    while(1)
    {
        cout <<"number: ";
        cin >> number;

        if(number <= 0)
        {
            break;
        }

    A.push_back(number);
    B.push_front(number);
    }

    cout<<"standard output A: ";

    list<int>::const_iterator it;
    cout << "output A: ";
    for(it = A.begin(); it != A.end(); it++)
    {
        cout << *it << ' ';
    }

    cout << endl;

    //printing in file
    ofstream output("b.txt", ios::out|ios::binary);
    if(!output.good())
    {
        cout<<"file error"<<endl;
        exit(1);
    }


    cout << "output B: it's in the file";
    for(it = B.begin(); it != B.end(); it++)
    {
        output << *it << ' '; //print in file
    }

    output.close();//close file

    cout << endl;

    A.splice(A.end(), A, A.begin());
    B.splice(B.end(), B, B.begin());

    cout << "iterator output A: ";
    for(it = A.begin(); it != A.end(); it++)
    {
        if(it == --A.end())
        {
            cout << *it;
        }
        else
        {
            cout << *it << ',';
        }
    }

    cout << endl;


    cout << "iterator output B: ";
    list<int>::const_iterator itt;
    for(itt = B.begin(); itt != B.end(); itt++)
    {
        if(itt == --B.end())
        {
            cout << *itt;
        }
        else
        {
            cout << *itt << ',';
        }
    }

    //merging A with B and then sort

    cout << endl;

    A.merge(B);
    A.sort();

    //print the merged lists
    cout <<"merged list: ";
    for(it = A.begin(); it != A.end(); it++)
       {
        if(it == --A.end())
        {
            cout << *it;
        }else{
        cout << *it << ' ';
        }
       }

    return 0;
}






