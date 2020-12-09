#include <iostream>
using namespace std;

template<class T>

class Adder {

	T n1,n2;
public:

	Adder(T _n1, T _n2): n1(_n1),n2(_n2){ }

	T Add();
};

template<class T>

T Adder<T> :: Add() {

	return n1+n2;
}

// LINE-1: Declare the Template

//LINE-2: Fill with correct Template signature

//n2;

int main() {

	Adder<int> obj1(10, 20);
	
	Adder<double> obj2(3.14, 8.6);

	cout << obj1.Add() << " " << obj2.Add() << endl;
	
	return 0;
}
