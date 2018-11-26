/*
 CH08-320143
 a3_p5.cpp
 Kevin Silaj
 k.silaj@jacobs-university.de
 */

#include <iostream>
#include "WindGauge.h"

using namespace std;

int main()
{

    WindGauge w;

    w.currentWindSpeed(15);
    w.currentWindSpeed(16);
    w.currentWindSpeed(12);
    w.currentWindSpeed(15);
    w.currentWindSpeed(15);
    w.print();

    cout<<endl;

    w.currentWindSpeed(16);
    w.currentWindSpeed(17);
    w.currentWindSpeed(16);
    w.currentWindSpeed(16);
    w.currentWindSpeed(20);
    w.currentWindSpeed(17);
    w.currentWindSpeed(16);
    w.currentWindSpeed(15);
    w.currentWindSpeed(16);
    w.currentWindSpeed(20);
    w.print();

    //return
    return 0;
}
