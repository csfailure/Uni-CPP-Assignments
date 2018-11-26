/*
CH08-320143
a4 p6.cpp (header)
Kevin Silaj
k.silaj@jacobs-university.de
*/

#ifndef ACCESS_H_
#define ACCESS_H_

#include <iostream>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Access
{
private:
    map<unsigned int, unsigned int> aces;

public:
    void activate(unsigned int code, unsigned int level);
    void deactivate(unsigned int code);
    bool isactive(unsigned int code, unsigned int level) const;
    map<unsigned int, unsigned int> getter();
};

#endif

