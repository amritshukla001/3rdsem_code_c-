#include <iostream>

#include <string>

using namespace std;

class A {

string s1 = "Hello";

public:

string get_str() { return s1; }
};

class B : public A { 

string s2 = "Hi";


};

void print (A &a) { 

	cout << a.get_str() << endl;
}

int main() {

A t1;

B t2;

print (t1);

print(t2);

return 0;

}
