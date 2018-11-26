/*
 CH08-320143
 a3_p6.cpp
 Kevin Silaj
 k.silaj@jacobs-university.de
 */

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;


int main()
{
    int i;

    //initialize priority queue
    priority_queue<int, vector<int>, greater<int> > pri_q;

    cout << "1 if queue is empty and 0 if not: " << pri_q.empty() << endl;
    cout << endl;

    //testing priority queue by pushing elements
    for(i = 1; i < 6; i++)
    {
        pri_q.push(i); //enter i into queue
    }

    cout << "1 if queue is empty and 0 if not: " << pri_q.empty() << endl;
    cout <<"size of queue is: " <<  pri_q.size() << endl;
    cout << "top of queue: " << pri_q.top() << endl;

    cout<< endl;

    //testing by popping elements
    for(i = 1; i < 3; i++)
    {
        pri_q.pop(); //deletes first element from queue
    }

    cout << "1 if queue is empty and 0 if not: " << pri_q.empty() << endl;
    cout <<"size of queue is: " <<  pri_q.size() << endl;
    cout << "top of queue: " << pri_q.top() << endl; //returns first element


    return 0;
}

