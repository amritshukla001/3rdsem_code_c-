#include <iostream>
using namespace std;

class myClass {
	
	int X;
	static myClass *instance;
	myClass(int i) : X(i) { }

public:

	int getVal() { return X; }
	static myClass  * createInstance(int x) {

		if(!instance) {
			instance=new myClass(x);
		}

		return instance;
	}
};

myClass *myClass :: instance=0;

void foo() {
	myClass *s = myClass :: createInstance(1);
	cout << s->getVal() << " ";
}
void fun() {
	myClass *s= myClass :: createInstance(2);
	cout << s->getVal() << " ";
}
int main() {
	foo();
	fun();

	myClass *s = myClass :: createInstance(3);
	cout << s->getVal() << " ";
	return 0;
}
