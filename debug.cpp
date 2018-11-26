/*
    CH08-320143
    a6_1
    Kevin Silaj
    k.silaj@jacobs-university.de
*/

#include <iostream>
using namespace std;

int sum(int a[], int nr) {
	int s=0;
	for(int i=0; i<nr; i++)
		s+=a[i];
	return s;
}

int difference(int a,int b) {
	if (a-b < 0)
		return b-a;
	else
		return a-b;
}

int main() {
	int n;
	cout << "n=";
	cin >> n;
	int v[n];
	cout << "Enter values for the array" << endl;
	for(int i=0; i<n; i++)
		cin >> v[i];
	int result = sum(v, n);
	cout << "Result=" << result << endl;
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "Difference=" << difference(x, y) << endl;
	return 0;
}
/*
    g++ -g -o debug1 debug1.cpp
    break point main

    In the sum function for loop we had "i <= nr" where it should be "1 < nr"
    Meanwhile in main it is only "i < nr" in the for loop
    That is why the sum didn't work, because the array included another
    integer to add with the ones we included

    In the difference function
    Instead of "unsigned int a b" it should be "int a int b" in the difference
    function for the code to work
    The function difference can be either unsigned int or int
    it will still work fine according to the tests
*/
