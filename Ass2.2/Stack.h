#include <iostream>
#include <string>

using namespace std;

int const X = 10

class Stack
{
    private:
        int stacksize;
        T *st;
        T top;
    public:
        Stack();
        Stack(const Stack&);
        Stack(int);
        ~Stack();

        bool FullStack();
        bool push(const T&);
        bool pop(T& out);
        bool EmptyStack();

        T back(void);
        int NrEntries();

};

template<class T>  //empty constructor
Stack<T>::Stack()
{
    st = new T[X];
    top = 0;
    stacksize = X;
}

template<class T>
Stack<T>::Stack(const Stack& s) //copy constructor
{
    int i;
    size = s.size;
    top = s.top;
    st = new T[stacksize];
    for(i = 0; i < top; i++)
    {
        st[i] = s.st[i];
    }
}


template<class T> //parameters constructor
Stack<T>::Stack(int newstacksize)
{
    st = new T[newstacksize];
    top = 0;
    stacksize = newstacksize;
}

template<class T> //full stack function
bool Stack<T>::FullStack()
{
    if(top == stacksize)
        return true;
    else
        return false;
}

template<class T>
bool Stack<T>::EmptyStack()//empty stack function
{
    if(top == -1)
        return true;
    else
        return false;
}

bool Stack<T>::push(const T& element)//push into stack
{
    if(FullStack())
    {
        cout << "full stack" << endl;
        return false;
    }
    else
    {
        st[top] = element;
        top = top + 1;
        return true;
    }

}

template<class T>
bool Stack<T>::pop(T &out)//pop out of stack
{
    if EmptyStack()
    {
        cout <<"empty stack"<<endl;
        return false;
    }
    else
    {
        out = st[top - 1];
        top = top - 1;
        return true;
    }
}

template<class T>
Stack<T>::~Stack()//destructor
{
    delete[]st;
}

template<class T>
T StacK<T>::back(void)
{
    if(EmptyStack())
    {
        cout << "empty stack"<< endl;
        return false;
    }
    else
    {
        return st[top - 1];
    }
}

template<class T>
int Stack<T>::getNumEntries() {
    return top;
}
