/*
CH08-320143
a4 p4.cpp (test)
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include "Access.h"
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    Access kev;

    kev.activate(1234);
    kev.activate(9999);
    kev.activate(9876);

    unsigned int pass;

    while(kev.isactive(pass) == false)
    {
        cout<<"password: ";
        cin>>pass;

        if(kev.isactive(pass) == 1)
        {
            cout << "Password Accepted...Door is opening" << endl;
        }

        if(kev.isactive(pass) == 0)
        {
            cout << "Password Rejected" << endl;
        }
    }

    //deactivate the correct pass we inputed and 2 others
    kev.deactivate(pass);
    kev.deactivate(9999);
    kev.deactivate(1111);

    cout<< "Passwords Deactivated"<<endl;

    //repeat the same after deactivation
    while(kev.isactive(pass) == false)
    {
        cout<<"password: ";
        cin>>pass;

        if(kev.isactive(pass) == 1)
        {
            cout << "Password Accepted...Door is opening" << endl;
        }

        if(kev.isactive(pass) == 0)
        {
            cout << "Password Rejected" << endl;
        }
    }

}
