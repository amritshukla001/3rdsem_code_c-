#include <iostream>
using namespace std;

class A {
	//static int x;
	//int x1=5;
public:
	void print() {
		cout << "a" << endl;
	}
};

class B: public A {
	
public:	
	void print() {
		cout << "b" << endl;
	}
};

//int A::x=10;

int main() {
	//B b;
	//cout << sizeof(b) << endl;
	//b.f1();

A *a1= new A();
B *b1=new B();

a1->print();
b1->print();
	return 0;
}
