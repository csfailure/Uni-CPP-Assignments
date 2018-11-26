/*
 CH08-320143
 a2 p4.cpp
 Kevin Silaj
 k.silaj@jacobs-university.de
 */

#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

template <class T>
class Linkedlist{
private:
    struct Node {
        T info;
        struct Node * prev;
        struct Node * next;
    };
    Node *nodefront;
    Node *noderear;
    int count, size;

public:

     Linkedlist();//empty

    //parameter const
    Linkedlist(int newsize);
    Linkedlist(const Linkedlist&);//copy
    ~Linkedlist(); //destructor

    //methods
    bool FullList() const;  // check if list full
    bool EmptyList() const; // check if list empty

    bool addfront(T);// add element to front
    bool addback(T);// add element to back

    bool deletefront();//delete front

    int getSize();//elements of the list
    T getback();
    T getfront();
};

template <class T>
Linkedlist<T>::Linkedlist(){
    this->size = 10;
    count = 0;
    nodefront = NULL;
    noderear = NULL;
}

template <class T>
Linkedlist<T>::Linkedlist(int newsize){
    size = newsize;
    count = 0;
    nodefront = NULL;
    noderear = NULL;
}

template <class T>
Linkedlist<T>::~Linkedlist(){
    /*while(count > 0){
        (*this).pop();
    }*/
}

template <class T>
bool Linkedlist<T>::FullList() const
{
    if(count == this->size)
    {

        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
bool Linkedlist<T>::EmptyList() const
{
    cout<<"empty list"<<endl;
    return count == 0;
}

template <class T>
int Linkedlist<T>::getSize()
{
    return count;
}

template <class T>
bool Linkedlist<T>::addfront(T element)
{
    if(FullList())
    {
        cout << "full list"<<endl;
        return false;
    }
    Node *topush = new Node;
    topush->info = element;
    count++;

    if(nodefront  == NULL)
    {
        topush->next = NULL;
        topush->prev = NULL;
        nodefront  = topush;
        noderear = topush;
        cout << "Linked list created" << endl;
    }

    else
    {
        topush->prev = NULL;
        nodefront ->prev = topush;
        topush->next = nodefront;
        nodefront  = topush;
        cout << "add front: " << nodefront->info << endl;

    }
    return true;
}

template <class T>
bool Linkedlist<T>::addback(T element){
    if(FullList())
    {
        cout << "full list"<<endl;
        return false;
    }

    Node *topush = new Node;
    topush->info = element;
    count++;
    if(nodefront == NULL)
    {
        topush->next = NULL;
        topush->prev = NULL;
        nodefront = topush;
        noderear = topush;
        cout << "Linked list created" << endl;
    }
    else
    {
        topush->next = NULL;
        noderear->next = topush;
        topush->prev = noderear;
        noderear = topush;
        cout << "add end: " << noderear->info << endl;

    }
    return true;
}

template <class T>
T Linkedlist<T>::getfront(void){
    return nodefront->info;
}

template <class T>
T Linkedlist<T>::getback(void){
    return noderear->info;
}

//delete method added to test the getfront with remove
template <class T>
bool Linkedlist<T>::deletefront(){
    if(nodefront == NULL){
        return false;
    }

    count--;
    Node *temp = nodefront;
    nodefront = nodefront->next;
    cout << "delete front...new front: " << nodefront->info << endl;
    delete temp;
    if(count == 0)
    {
        noderear = NULL;
    }
    return true;
}

#endif /* LinkedList_h */

