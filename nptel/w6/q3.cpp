#include <iostream>

using namespace std;

class base {

public:
virtual void fun() { cout << "base::fun" << endl; }
};

class derived : public base {

public:
void fun() { cout << "derived: :fun" << endl; }


};

int main() {

derived t1;

base *t2 = new derived ();

base *t3 = &t1;

t2->fun();

t3->fun();

return 0;

}
