#include <iostream>

using namespace std;


double f(int i,int j) {

	return (double)i/j;
}

int main() {

	int i,j;
	double res;

	cin >> i;
	cin >> j;

	res=f(i,j);

	cout << "\n" << res;
}
