#include <iostream>

using namespace std;

template <typename T>

T sum(T x,T y) {

	return x+y;
}

int main() {

	cout << sum(3.14,9);

	return 0;
}
