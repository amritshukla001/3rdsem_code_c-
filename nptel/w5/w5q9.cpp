#include <iostream>

using namespace std;

class Base {
protected:
		int X;
public:
	Base(int i=0):X(i){ }
};

class Derive: public Base {

	Base b;
public:
	Derive(Base b1,int i=0):Base(i),b(b1) { }

 	void print1() { cout << X << endl; }
	void print2() { cout << b.X << endl; }
};

int main() {

	Base b(5);
	Derive d(b,10);

	d.print1();
	d.print2();
}
