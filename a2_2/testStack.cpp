#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main(){
    Stack<int> st;
    int i;
    for(i=0; i<11; i++)
    {
     st.push(i);
    }

    int o;
    for(i=0; i<11; i++)
    {
        cout << o << endl;
        st.pop(o);
    }

    st.push(25);
    st.push(34);
    int a = st.back();
    cout << a << endl;
    int b = st.getNumEntries();
    cout << b << endl;

    return 0;
}
