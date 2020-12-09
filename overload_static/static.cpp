#include <iostream>

using namespace std;

class A
{
	public:
		static int c;
};

int A::c;

int main() {

	A a1;
	a1.c=5;
	
	return 0;
}
