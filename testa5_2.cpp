/*
    CH08-320143
    a5_2
    Kevin Silaj
    k.silaj@jacobs-university.de
*/
#include <iostream>
#include <exception>
#include <algorithm>

using namespace std;

class OwnException{
private:
    string str;
public:
    const char *what() throw()
    {
        return "OwnException\n";
    };

    OwnException() {}; //empty
    OwnException(string a) {str = a;}//parameters
    virtual ~OwnException() {}; //destructor
};


void my_Fun(int a){
    switch(a){
        case 1:
            throw 'a';
            break;
        case 2:
            throw 12;
            break;
        case 3:
            throw true;
            break;
        default:
            throw OwnException("Default case exception");
            break;
    }
}

int main(){
    try{
        my_Fun(1);
    }
    catch(const char a){
        cerr << "Caught in main(char): " << a << endl;
    }

    try{
        my_Fun(2);
    }
    catch(int i){
        cerr << "Caught in main(int): " << i << endl;
    }

    try{
        my_Fun(3);
    }
    catch(bool b){
        cerr << "Caught in main(bool): " << b << endl;
    }

    try{
        my_Fun(6);
    }
    catch(OwnException own){
        cout << own.what();
    }

    return 0;
}
