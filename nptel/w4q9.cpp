#include <iostream>
using namespace std;

int x=10;

namespace e{
	int x=5;
}

int main() {

	using e::x;
	cout << x;

	return 0;
}
