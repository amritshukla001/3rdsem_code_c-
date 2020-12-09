#include <iostream>

using namespace std;

class A {

public:

	void print() { cout << "Function print" << endl; }
};

class B : private A {

public:

	B() { A.print(); }
};


int main() {

	B tl;

	return 0;
}

