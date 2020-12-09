#include <iostream>
#include <string>

using namespace std;

class Sample {

	string name;
public:	
	Sample() {
		cout << "s" << " ";
	}

	Sample(string s) : name(s) {
		cout << name << " ";
	}
};

int main() {

	Sample s1;
	Sample *s2 = new Sample("s2");
	Sample *s3;

	new Sample("s4");

	return 0;
}
