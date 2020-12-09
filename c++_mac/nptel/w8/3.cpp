#include <iostream>
#include <string>

using namespace std;

int main() {

	try {
		throw "s";
	}

	catch(int x) {
		cout << "Caught 1" << x;
	}

	catch(char x) {

		cout << "Caught 2" << x;
	}

	catch(string x) {
	
		cout << "Caught 3" << x;
	}

	catch(...) {

		cout << "Default Exception";
	}

	return 0;
};
