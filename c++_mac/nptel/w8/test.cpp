#include <iostream>
using namespace std;

class A {
public:
    A(int i = 0) { cout << i << " "; }
    void print(int i){ cout << i << " "; }
};
class B : virtual public A { // LINE-1 : Inherit from class A
public:
    B(int i = 0) : A(++i) { print(i); }
};

class C : virtual public A { // LINE-2 : Inherit from class A
public:
    C(int i = 0) : A(++i) { print(i); }
};

class D : public B,public C { // LINE-3 : Inherit from class B and C
public:
    D(int i = 0) : B(i * 2), C(++i) { print(i); }
};
int main() {
    int i;
    cin >> i;

    D obj(i);

    return 0;
}
