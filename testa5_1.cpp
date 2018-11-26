/*
    CH08-320143
    a5_1
    Kevin Silaj
    k.silaj@jacobs-university.de
*/
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>

using namespace std;

int main(){
    vector<int> V; //create vector
    int i;
    cout << "Pushing values into vector" << endl;
    for(i=0; i<20; i++)
        V.push_back(8);
    try{ //try method
        cout << "Access 21th element";
        V.at(21);
        throw "Error No 21st Element";
    }
    catch(const out_of_range out){ //catch method
        //using out
        cerr << "\nException caught: " << out.what() << endl;
        return 1;
    }

    return 0;
}

