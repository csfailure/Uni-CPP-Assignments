/*
CH08-320143
a4 p6.cpp (test)
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include "Access.h"

using namespace std;

int main()
{
    Access kev;

    kev.activate(1234, 1);
    kev.activate(9999, 5);
    kev.activate(9876, 9);

    unsigned int pass;

    while(kev.isactive(pass,5) == false)
    {
        cout<<"password: ";
        cin>>pass;

        if(kev.isactive(pass, 5) == 1)
        {
            cout << "Password Accepted...Door is opening" << endl;
        }

        if(kev.isactive(pass, 5) == 0)
        {
            cout << "Password Rejected" << endl;
        }
    }

    //deactivate the correct pass we inputed and 2 others
    kev.deactivate(pass);
    kev.activate(1111,7);
    kev.activate(9999, 8);//reactivate with level 8

    cout<< "Passwords Deactivated"<<endl;


    //after modifications
    do
    {
        cout<<"password: ";
        cin>>pass;

        if(kev.isactive(pass, 7) == 1)
        {
            cout << "Password Accepted...Door is opening" << endl;
        }

        if(kev.isactive(pass, 7) == 0)
        {
            cout << "Password Rejected" << endl;
        }
    }while(kev.isactive(pass, 7) == false);

    return 0;
}
