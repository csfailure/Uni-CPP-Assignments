//PROBLEM 1.A KEVIN SILAJ

#include <cstdlib>
#include <iostream>
#include <stdexcept>
#define SIZE 10

using namespace std;


template <class A> class Stack
{

private:

    struct StackNode
    {
        A info;
        StackNode* next;
    };

    StackNode *top;
    int size;
    int count;

public:
    Stack()
    {
        this->count = -1; //constant time complexity T(1)
        this->top = NULL;
    }

    Stack(int new_size)
    {
        count = 0; //constant time complexity T(1)
        top = NULL;
        size = new_size;
    }

    void push(A element)
    {

        try
        {
            if(count == SIZE)
            {
                throw out_of_range("Stack Overflow");
            }
        }
        catch(out_of_range& err)
        {
            cerr << err.what() << endl;
            exit(EXIT_FAILURE);
        }


            StackNode *newTop = new StackNode;

            if(top == NULL)  //constant time complexity T(1)
            {
                newTop->info = element;
                newTop->next = NULL;
                top = newTop;
                count++;
            }
            else
            {
                newTop->info = element;
                newTop->next = top;
                top = newTop;
                count++;
            }
    }

    bool isEmpty()
    {
        return count == -1; //constant time complexity T(1)
    }


    void pop()
    {
        try
        {
            if(isEmpty()) //constant time complexity T(1)
            {
                throw out_of_range("Stack Underflow");
            }
        }
        catch(out_of_range& err)
        {
            cerr << err.what() << endl;
            exit(EXIT_FAILURE);
        }


        StackNode *old = top;
        top = top->next;
        delete(old);

    }


    void print()
    {
        StackNode *temp;
        temp = top;
        while(temp!=NULL) //time complexity T(n) where n is the nr of elements
        {
            cout<<temp->info<<endl;
            temp=temp->next;
        }

    }


};

int main()
{

    Stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();
    s.print();

    cout<< endl;

    Stack <char> s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');

    s1.pop();

    s1.print();

    cout<<endl;

    Stack<float> s2;
    s2.push(1.35);
    s2.push(34.2);
    s2.push(29.7);
    s2.pop();

    s2.print();

    return 0;
}
