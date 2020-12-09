#include <iostream>

using namespace std;

class A {

int a;

public:

A(int i) : a(i) { }

virtual void fun(A *) { cout << a << endl; }


};

class B : public A {

int b;

public:

B(int i = 0, int j = 0) : A(i), b(j) { }
void fun(B *) { cout << b << endl; } 
};

// LINE-1

int main() {

A *t1 = new B(1, 2);

t1->fun(new B);

return 0;
}
