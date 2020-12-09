#include <iostream>
using namespace std;

int var=0;

namespace name {
	int var=2;
}

int main() {

	using namespace name;

	int var=1;

	cout << ::var << " " << var << " " << name::var;

	return 0;
}
