/*
CH08-320143
a4 p5.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <map>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

/**
                    Reminder
My code only works with Names only and not with names + last names
I tried to do it. It just won't work. Please tell me how can I fix that
if you know how :)

**/

int main()
{
    string name, date;
    vector <string> vec;
    map<string, string> mapp;

    ifstream data;
    data.open("data.txt");

    if(!data)
    {
        cout << "File not found";
    }else
        cout<<"File is found"<<endl;

    do
    {
        data>> name;
        data >> date;

        vec.push_back(name);
        vec.push_back(date);
        mapp[name] = date;

    }while(!data.eof());

    map<string, string>::iterator it = mapp.find(name);


    while(1){

        cout << "Enter a name:" << endl;
        getline(cin, name);

        if(it != mapp.end()){
            cout << mapp.find(name) -> second << endl;
        }
        else{
            cerr << "Name not found" << endl;
        }
    }

    data.close();
    return 0;
}
