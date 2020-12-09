#include <iostream> 
#include <exception>

using namespace std;

class Parent { 
virtual void fun() { } 
}; 

class Child: public Parent { 
void fun() { }
};

int main() {

try {

Parent *pbd = new Child; 
Parent *pbb = new Parent;

Child *pd = dynamic_cast<Child*>(pbd); // LINE-1

if (pd == 0)

	cout << "Null pointer on first type-cast" << endl;

pd = dynamic_cast<Child*> (pbb); // LINE 2

if (pd == 0)

	cout << "Null pointer on second type-cast" << endl;

pd = static_cast<Child*>(pbd); // LINE-3

if (pd == 0)

	cout << "Null pointer on third type-cast" << endl;
}
catch (exception& e) {

cout << "Exception: " << e. what();
}
return 0;
}
