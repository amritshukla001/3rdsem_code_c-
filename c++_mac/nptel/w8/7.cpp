#include <iostream>

using namespace std;

template <class T,int i>

void repeat(T val) {

	i=5;

	for(int j=0;j<i;j++)
		cout << val << " ";

	return;
}

int main() {

	repeat<int,10>(10);

	return 0;
}
