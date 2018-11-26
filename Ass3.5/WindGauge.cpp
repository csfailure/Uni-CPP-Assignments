/*
 CH08-320143
 a3_p5.cpp
 Kevin Silaj
 k.silaj@jacobs-university.de
 */

#include <iostream>
#include <deque>
#include "WindGauge.h"

using namespace std;

//methods
WindGauge::WindGauge(int period)
{
    this->period = period;
}

void WindGauge::currentWindSpeed(int speed)
{
    if((int)deq.size() == period)//if full
    {
        deq.pop_back();
        deq.push_front(speed);
    }
    else
    {
        deq.push_front(speed);
    }
}

int WindGauge::highest() const
{
     //iterator
    deque<int>::const_iterator it = deq.begin();
    int max = *it;
    while(it != deq.end()){
        if(*it > max)
        {
            max = *it;
        }

        it++;
    }

    return max;
}

int WindGauge::lowest() const
{
    int low = *it;
    while(it != deq.end())
    {
        if(*it < low)
        {
            low = *it;
        }

        it++;

    }

    return low;
}

int WindGauge::average() const
{
    int sum = 0;
    int average;
    while(it != deq.end()){
        sum += *it;
        it++;
    }
    average = sum/deq.size();
    return average;
}

void WindGauge::print()
{
    cout << "low: " << lowest() << endl;
    cout << "average: " << average() << endl;
    cout << "high: " << highest() << endl;
}
