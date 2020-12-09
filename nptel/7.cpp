#include <iostream>
#include <cstring>

using namespace std;

class MyClass {

	char *fname,*mname,*lname; 

public:

	MyClass(char* _fname,char* _mname,char* _lname):
		fname(setFname(_fname)),mname(setMname(_mname)), lname(setLname(_lname)) { }

	char* setFname(char* fn) {

		cout << fn << " ";
		return strdup(fn);
	}

	char* setMname(char* mn) {

		cout << mn << " ";
		return strdup(mn);
	}

	char* setLname(char *ln) {

		cout << ln << " ";
		return strdup(ln);
	}
};

int main() {

	MyClass obj("Ram","Mohan","Roy");
	
	return 0;
}



