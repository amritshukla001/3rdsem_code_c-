#include <iostream>

using namespace std;

class myClassA {

public:

int a;

myClassA(int x) : a(x) { }

};

class myClassB : private myClassA {

int b;

public:

myClassB(int x, int y) : b(y), myClassA (x) { }

};

int main() {

myClassB t1(1, 2);

myClassA t2(5);

cout << t1.a; 
cout << t2.a;

return 0;

// LINE-1

// LINE-2

}
