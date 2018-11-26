/*
 CH08-320143
 a2 p4.cpp
 Kevin Silaj
 k.silaj@jacobs-university.de
 */

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    Linkedlist<int> intlinked(10);

    intlinked.addfront(10);
    intlinked.addfront(20);
    intlinked.addfront(30);
    intlinked.addfront(40);
     intlinked.addfront(50);

    intlinked.deletefront();
    cout <<"get front: " << intlinked.getfront() << endl;

    intlinked.addback(60);
    cout << "get back: " << intlinked.getback() << endl;

    return 0;
}


