/*
CH08-320143
a3 p1.cpp
Kevin Silaj
k.silaj@jacobs-university.de
*/

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    unsigned int i;
    string word;

    vector<string> vec;

    while(1)
    {
        cout<<"Word: ";
        cin>>word;

        if(word == "END")
        {
            break;
        }
        //insert the words in the vector using push_back
        //but not 'END'
        vec.push_back(word);

    }

    cout << endl;

    //first print with spaces
    cout<<"standard output: ";
    for(i = 0; i<vec.size(); i++)
    {
        cout << vec[i] <<' ';
    }

    cout << endl;

    //second print with iterator
    vector<string>::const_iterator it;
    cout << "iterator output: ";
    for(it = vec.begin(); it != vec.end(); it++)
    {
        //the last word doesn't require a comma after it
        if(it == vec.end() - 1)
        {
            cout<< *it;
        }
        else
        {
            cout<< *it << ',';
        }
    }

    cout<<endl;

    return 0;
}
