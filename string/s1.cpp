#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

	stringstream ss;
	string a;
	cout << "enter a string " << endl;
	ss >> a;
	ss << a;
	return 0;

}
