/*
CH08-320143
a4 p1.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> V;
    int i;

    cout<<"push values from 1 to 30" << endl;

    for(i=1; i<=30; i++)
    {
        V.push_back(i);
    }

    cout <<"5 in the end"<<endl;
    V.push_back(5);

    //create the iterator
    vector<int>::const_iterator it;

    cout << "reverse vector"<<endl;
    reverse(V.begin(), V.end());//algorithm library function

    cout <<"the vector: ";
    for(it = V.begin(); it != V.end(); it++)
    {
        cout << *it << ' ';
    }

    cout << endl;

    //replace all 5s with 129
    cout<<"modified vector: ";
    replace(V.begin(),V.end(),5,129);//algorithm library function
    for(it = V.begin(); it != V.end(); it++)
    {
        cout << *it << ' ';
    }

    cout<<endl;

    return 0;
}
