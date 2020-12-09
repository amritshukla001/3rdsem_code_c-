#include <iostream>

using namespace std;

class MyClass {

public:

	MyClass() {
		cout << "1";
	}

	MyClass(const MyClass &t) {
		cout << "2";
	}
};

int main() {

	MyClass *t1,*t2;

	t1 = new MyClass();
	t2 = new MyClass(*t1);

	MyClass t3=*t1;
	MyClass t4=t3;
	
	return 0;
}
