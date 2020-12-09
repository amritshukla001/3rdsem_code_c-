#include <iostream>

using namespace std;

class A {

public:

virtual void f1() { cout << "A::f1" << endl; } 
void f2() { cout << "A::f2" << endl; } 
};

class B : public A { 

public:

void f1() { cout << "B::f1" << endl; } 
virtual void f2() { cout << "B::f2" << endl; }
};

class C : public B { 

public:

void f1() { cout << "C::f1" << endl; } 

void f2() { cout << "C::f2" << endl; }
};

int main() { 

A *a = new C();

a->f1();

a->f2();

return 0;
}
