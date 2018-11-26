/*
    CH08-320143
    a2_p2
    Esti Sojati
    es.sojati@jacobs_university.de
*/
#include <string>
#include <iostream>
using namespace std;

int const DEF = 10;

template <class T>
class Stack{
private:
    int size;
    T top;
    T *stck;
public:
    Stack();
    ~Stack();
    Stack(int);
    Stack(const Stack&);

    bool if_Full();
    bool push(const T&);
    bool if_Empty();
    bool pop(T &out);

    T back(void);
    int getNumEntries();
};

template<class T>
Stack<T>::Stack(){
    stck = new T[DEF];
    top = 0;
    size = DEF;
}

template<class T>
Stack<T>::Stack(int newsize){
    stck = new T[newsize];
    top = 0;
    size = newsize;
}

template<class T>
Stack<T>::Stack(const Stack &s){
    int i;
    size = s.size;
    top = s.top;
    stck = new T[size];
    for(i = 0; i < top; i++){
        stck[i] = s.stck[i];
    }
}

template<class T>
Stack<T>::~Stack(){
    delete[] stck;
}

template<class T>
bool Stack<T>::if_Full(){
    if(top == size)
        return true;
    else
        return false;
}

template<class T>
bool Stack<T>::push(const T& in){
    if(if_Full()){
        cout << "Stack FULL!" << endl;
        return false;
    }
    else{
        stck[top] = in;
        top = top + 1;
        return true;
    }
}

template<class T>
bool Stack<T>::if_Empty(){
    if(top == 0)
        return true;
    else
        return false;
}

template<class T>
bool Stack<T>::pop(T &out){
    if(if_Empty()){
        cout << "Stack EMPTY!(pop)" << endl;
        return false;
    }
    else{
        out = stck[top - 1];
        top = top - 1;
        return true;
    }
}

template<class T>
T Stack<T>::back(void){
    if (if_Empty()){
        cout << "Stack EMPTY!(back)" << endl;
        return false;
    }
    else{
        return stck[top - 1];
    }
}

template<class T>
int Stack<T>::getNumEntries() {
    return top;
}
