#include <iostream>

using namespace std;

template<class T> T GetMax(T &a,T &b) {
	 
		return ((a>b) ? a : b);
	
}

int main() {

	int i=5,j=6,k;
	long l=10,m=5,n;

	k=GetMax<int>(i,j);
	n=GetMax<long>(l,m);

	cout << k << " ";
	cout << n;

	return 0;
}
