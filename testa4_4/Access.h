/*
CH08-320143
a4 p4.cpp (header)
Kevin Silaj
k.silaj@jacobs-university.de
*/

#ifndef ACCESS_H_
#define ACCESS_H_

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

class Access
{
private:
    set<unsigned int> aces;

public:
    void activate(unsigned int code);
    void deactivate(unsigned int code);
    bool isactive(unsigned int code) const;
    set<unsigned int> getter();
};

#endif
