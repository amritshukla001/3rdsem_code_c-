#include <iostream>

using namespace std;

class A {

public:

void fun1() { cout << "A::fun1" << endl; } virtual void fun2() { cout << "A::fun2" << endl; }


};

class B : public A {

public:

void fun1() { cout << "B::fun1" << endl; } void fun2() { cout << "B::fun2" << endl; }

};

int main() {

A *t = new B();

t->fun1(); 
t->fun2();

return 0;

}
