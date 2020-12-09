#include <iostream> 
using namespace std;

class X {

public:

virtual void fun() { }

};

class Y : public X{ public:

void fun(int i) { }

};

int main() {

Y t1; 
X *t2 = new Y();

t1.fun();

t1.fun(3);

t2->fun();

t2->fun (3);

return 0;
}
