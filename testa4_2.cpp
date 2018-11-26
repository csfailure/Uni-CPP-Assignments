/*
CH08-320143
a4 p2.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <ctime>
#include <set>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    set<int> S;
    set<int>::const_iterator it;//create iterator
    srand((unsigned)time(NULL));

    cout << "push 6 random numbers from 1 to 49" << endl;
    while(S.size() < 6)
    {

        S.insert(rand() %49 + 1); // insert 6 random numbers from 1 to 49
    }

    cout << "6 winner lottery numbers are: ";

    //the random numbers are automatically printed sorted
    for(it = S.begin(); it != S.end(); it++)
    {
        cout << *it << ' ';//print the 6 numbers
    }

    cout << endl;

    return 0;
}
