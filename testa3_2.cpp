/*
CH08-320143
a3 p2.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unsigned int i;
    string word;
    vector<string> vec;

    while (1)
    {
        cout<<"Word: ";
        getline(cin,word); //printing string containing spaces

        if(word == "END")
        {
            break;
        }

        vec.push_back(word);

    }

    cout << endl;

    if(vec.size() >= 5)
    {
        swap(vec.at(1), vec.at(4));
    }
    else
    {
        cout<<"elements don't exist"<<endl;
    }

    //creating two string variables to determine the last string
    //and its replacement string ???
    string s1 = *(vec.end()-1); //the last string
    string s2 = "???"; //replacement string

    replace(vec.end() - 1, vec.end(), s1, s2);

    cout<<"standard output: ";
    for(i = 0; i < vec.size(); i++)
    {
        //if it's not the last string then we put the comma
        if(vec[i] != *(vec.end()-1))
        {
            cout << vec[i] << ',';
        }
        else
        {
            cout << vec[i];
        }

    }

    cout << endl;

    vector<string>::const_iterator it;
    cout <<"iterator output: ";

    for(it = vec.begin(); it != vec.end(); it++)
    {
        if(it == vec.end()-1)
        {
            cout << *it;
        }
        else
        {
            cout << *it << ';';//if different from last, we put semicolon
        }
    }

    cout << endl;

    cout<<"reverse standard output: ";

    //reversing the position of the strings
    reverse(vec.begin(),vec.end());

    vector<string>::const_iterator itt;
    for(itt = vec.begin(); itt != vec.end(); itt++)
    {
        cout<< *itt << ' ';
    }

    cout << endl;

    return 0;

}

