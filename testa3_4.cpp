/*
CH08-320143
a3 p4.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <deque>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    deque<float> A;
    float f;

    while(1)
    {
        //reading the floats
        cout << "float: ";
        cin >> f;

        if(f == 0)
        {
            break;
        }

        if(f < 0)
        {
            A.push_front(f); //negatives in front
        }                    //positives back

        if(f > 0)
        {
            A.push_back(f);
        }
    }

    cout << endl;

    //printing the floats using iterator
    deque<float>::const_iterator it;
    cout << "standard output: ";
    for(it = A.begin(); it != A.end(); it++)
    {
        cout << *it << ' ';
    }

    cout << endl;

    deque<float>::iterator itt;
    for(itt = A.begin(); itt != A.end(); itt++)
    {
        if(*itt > 0)
        {
            A.insert(itt,0); //insert 0 between the last negative
            break;           //and the first positive
        }
    }

    cout << endl;

    cout << "modified output: ";
    for(it = A.begin(); it != A.end(); it++)
    {
        if( it == A.end()-1) //no ; after the last float
        {
            cout << *it;
        }
        else
        {
            cout<< *it << ';';
        }
    }

    cout<< endl;

    return 0;
}
