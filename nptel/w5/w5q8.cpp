#include <iostream>

using namespace std;

class A {

public:
	A(int i) { cout << "A::" << i << " ";}
	~A() { cout << "~A"; }
};

class B: public A {
public:
	B(int i):A(i++) { cout << "B::" << i << " "; }
	~B() { cout << "~B"; }
};

class C: public B {
public:
	C(int i):B(i++) { cout << "C::" << i << " "; }
	~C() { cout << "~C"; }
};

void f() {

	static C c(0);
}

int main() {

	f();
	C c(5);
	return 0;
}


