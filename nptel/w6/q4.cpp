#include <iostream>

using namespace std;

int x = 0;

class myClass {

public:

myClass() { x++; }

~myClass() { x--; }

};

class test : public myClass {

public:

test () { x += 5; } ~test() { x-= 2; }

};

void fun() {

test t;

myClass *t1 = new test ();

cout << x << " ";

delete t1;
}

int main() {

fun ();

cout << x;

return 0;
}
