/*
CH08-320143
a4 p6.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include "Access.h"

//most of the stuff are based from online sources
//so i am not 100% sure about Access however
//it seems to work fine
using namespace std;

void Access::activate(unsigned int code, unsigned int level)
{
    aces.insert(pair<unsigned int, unsigned int>(code, level));
}

void Access::deactivate(unsigned int code)
{
    aces.erase(code);
}

bool Access::isactive(unsigned int code,unsigned int level) const
{
    bool bol;

    if(aces.find(code) == aces.end())
    {
        bol=false;
    }
    else
    {
        if(aces.find(code)->second >= level)
        {
            bol = true;
        }
        else
        {
            bol = false;
        }
    }

    return bol;
}

map<unsigned int,unsigned int> Access::getter()
{
    return aces;
}
