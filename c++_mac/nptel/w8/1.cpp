#include <iostream>
using namespace std;

void fun(int test) {

	try {

		test ? throw test : throw "zero";

	}

	catch(int i) {

		cout << "Caught; " << i << " ";

	}
}

int main() {

	try {

		fun(1);
		fun(2);
		fun(0);
		fun(3);
	}

	catch(const char *str) {

		cout << "CaughtString ";
	}

	return 0;
}
