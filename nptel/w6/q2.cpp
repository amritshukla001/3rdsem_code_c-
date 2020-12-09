

#include <iostream> 
using namespace std;

class Myclass {

public:

virtual void fun() = 0;

};

void Myclass::fun() {

cout << "Pure virtual function";

}

int main() {

Myclass m;

Myclass *p = new Myclass();

p->fun();

return 0;
}
