#include <iostream>

using namespace std;

template <class T>

class List {

	T arr[N];

public:

	void setVal(int x,T value) {

		arr[x]=value;
	}

	T getVal(int x) {

		return arr[x];
	}
};

int main() {

	List<int,5> myints;
	List<double,5> mydoubles;

	myints.setVal(3, 10);
	mydoubles.setVal(1, 3.14);

	cout << myints.getVal(3) << " ";
	cout << mydoubles.getVal(1) << " ";

	return 0;
}
