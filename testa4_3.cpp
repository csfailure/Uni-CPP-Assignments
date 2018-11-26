/*
CH08-320143
a4 p3.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

int main(){
    set<int> A;
    multiset<int> B;
    int m;

    while(1)
    {
        cout << "Int: ";
        cin >> m;

        if(m <= 0)
        {
            break;
        }

        A.insert(m);
        B.insert(m);
    }

    set<int>::iterator posA;
    multiset<int>::iterator posB;

    cout << "A: ";
    for(posA = A.begin(); posA != A.end(); posA++)
    {
        cout << *posA << ' ';
    }

    cout << "\nB: ";
    for(posB = B.begin(); posB != B.end(); posB++)
    {
        cout << *posB << ' ';
    }
    cout << endl;

    A.erase(5); //removing 5 from both sets
    B.erase(5);

    cout << "A2: ";
    for(posA = A.begin(); posA != A.end(); posA++)
    {
        cout << *posA << ' ';
    }

    cout<<endl;

    cout << "B2: ";
    for(posB = B.begin(); posB != B.end(); posB++)
    {
        cout << *posB << ' ';
    }
    cout << endl;

    A.insert(14);//insert to set A
    A.insert(198);

    multiset<int> union_set(B);
    union_set.insert(A.begin(), A.end());

    cout << "Set Union: ";

    //I have used auto which works with the C++11 Compiler
    //if the code doesn't compile and shows like 25 errors
    //Please switch the compiler to C++11
    for (auto el : union_set)
    {
        cout << el <<  ' ';
    }
    cout << endl;

    set<int> D;
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(D, D.begin()));


    cout << "\nSet Intersection: ";
    for (auto el : D)
    {
        cout << el <<  ' ';
    }

    set<int> E;
    set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(E, E.begin()));

    cout << "Set Difference: ";
    for (auto el : E)
    {
        cout << el <<  ' ';
    }

    set<int> F;
    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(F, F.begin()));

    cout << "Set Symmetric Difference: ";
    for (auto el : F)
    {
        cout << el <<  ' ';
    };

    cout<<endl;

    return 0;
}
