#include <iostream>

using namespace std;

class A {

	int data;
public:
	A(int x) : data(x) { cout << data << " ";}

	~A() { cout << data << "  ";}

	void show() {
	
		static A a(5);
	}
};

int main() {

	A a1(10);
	
	a1.show();

	return 0;
}
	
