#include <iostream>
using namespace std;

class Test {
	static int X;
public:
	static void print() { 
	cout << X;
	}
	 static void  update(int a) {
	X=a;
	}
};

int Test::X=10;

int main() {

	Test::update(4);

	Test::print();

	return 0;
}
