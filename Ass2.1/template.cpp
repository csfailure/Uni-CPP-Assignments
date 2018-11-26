/*
CH08-320143
a2_p1.cpp (test)
Kevin Silaj
k.silaj@jacobs-university.de
*/


#include<iostream>
#include"Complex.h"

using namespace std;

//template including the array the max number and the elem we want to find
template <class T>
int array_search(T x_array[], int n, T x)
{
    int i;
    int index; //position
    for(i=0; i<n; i++)
    {
        if (x_array[i] == x) //from bool operator ==
        {
            index = i;
            return index;
        }else
        {
            index = -1;
        }
    }
    return index;
};

int main()
{
  //array of integers and printing the position of the one we want
  int intarray[] = {1,2,3,4,5,6,7,8,9};

  cout << array_search<int>(intarray, 9, 3) << endl;

  //same for doubles
  double doublearray[] = {1.3, 4.7, 12.5, 17.3, 24.4, 25.9};

  cout << array_search<double>(doublearray, 6, 17.3) << endl;

  //and stringss
  string sarray[] = {"blue", "yellow", "black", "white", "green", "red"};

  cout << array_search<string>(sarray, 6, "gray") << endl;

  Complex classarray[] = {Complex(1,1), Complex(12,7), Complex(-1,4)};

  cout << array_search(classarray, 3, Complex(5,7)) << endl;

    return 0;
}
