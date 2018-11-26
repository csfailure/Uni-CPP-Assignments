/*
    CH08-320143
    a5_3
    Kevin Silaj
    k.silaj@jacobs-university.de
*/
#include <exception>
#include <iostream>

using namespace std;

class Motor
{
public:
    Motor()
    {
        throw string("This motor has problems");
    };

    ~Motor() {}; //destructor
};

class Car
{

private:
    Motor *V12;

public:
    Car()
    {
        V12 = new Motor();
    };

    ~Car() //destructor
    {
        delete V12;
    };
};


class Garage
{

private:
    Car *lambo;

public:
    Garage()
    {
        try
        {
            lambo = new Car();
        }

        catch(string str)//catch the string from Motor
        {
            cout << str << endl;
            throw string("The car in this garage has problems with the motor");
        }
    };

    ~Garage()
    {
        delete lambo;
    }; //destructor
};

int main()
{
    try
    {
        Garage NotMineCuzImPoor;
    }

    catch(string strr) //catch catch the string from Garage
    {
        cout << strr;
    }

    cout<<endl;

    return 0;
}
