/*
CH08-320143
a4 p4.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <list>
#include "Access.h"

//most of the stuff are based from online sources
//so i am not 100% sure about Access however
//it seems to work fine
using namespace std;

void Access::activate(unsigned int code)
{
    aces.insert(code);
}

void Access::deactivate(unsigned int code)
{
    aces.erase(code);
}

bool Access::isactive(unsigned int code) const
{
     bool bol = (find(aces.begin(), aces.end(), code) != aces.end());
     return bol;
}

set<unsigned int> Access::getter()
{
    return aces;
}
