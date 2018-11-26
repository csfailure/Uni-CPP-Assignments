/*
    CH08-320143
    a6_2
    Kevin Silaj
    k.silaj@jacobs-university.de
*/
#include <iostream>
#include <sstream>
using namespace std;

void foo(int *array, int n, int *positives) {
	for(int i=0; i<n; i++)
		if (array[i]>0)
			(*positives)++;
}

class Test {
	private:
		int *a;
		int n;
	public:
		Test() {
			a=NULL;
			n=0;
		}
		Test(int *a, int n) {
			this->n = n;
			if (this->a != NULL) {
				delete this->a;
			}
			this->a = new int[n];
			for(int i=0; i<n; i++)
				this->a[i] = a[i];
		}
		string toString() {
			ostringstream ss;
			ss << "Length: " << n << endl << "Elements: ";
			for(int i=0; i<n; i++)
				ss << a[i] << " ";
			ss << endl;
			return ss.str();
		}
		~Test() {
			delete a;
		}
};

int main() {
	int v[3] = {1, 2, 3};
	int p = 0;
	foo(v, 3, &p);
	cout << "Amount of positive values in the array=" << p << endl;
	Test arr[5];
	Test *obj1;
	obj1=&arr[0];
	Test *obj2=new Test(v, 3);
	//Test *obj3;
	cout << obj1->toString();
	cout << obj2->toString();
	//cout << obj3->toString();
	delete obj1;
	delete obj2;
	//delete obj3;
	return 0;
}

/*
The problem in this program is with the objects.
The line 39 "ss << a[i] << " ";" doesn't work for object1 because
it doesn't recognize it but it works for object2.
In object3 the program crashes because object3 is
not initialized.
I commented object3 so the program

In function foo it should be (*positive++)

Others:
line 44 should be delete []a;
*/


