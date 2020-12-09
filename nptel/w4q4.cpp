#include <iostream>

using namespace std;

class myClass {

	static int i=5;
public:
	void display() { cout << i << endl; }
};

int main() {

	myClass m;
	
	m.display();

	return 0;
}
