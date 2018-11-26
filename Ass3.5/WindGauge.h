/*
 CH08-320143
 a3_p5.cpp
 Kevin Silaj
 k.silaj@jacobs-university.de
 */

#include <iostream>
#include <deque>

using namespace std;

class WindGauge {
public:
    //declare methods
    WindGauge(int period = 12);
    void currentWindSpeed(int speed);
    int highest() const;
    int lowest() const;
    int average() const;

    void print();

private:
    //init properties
    int period;
    deque<int> deq;
    int speed;
};
