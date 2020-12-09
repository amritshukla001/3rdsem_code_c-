#include <iostream>

using namespace std;

int main() {

	int i = 10;

	double d = 3.14;

	int *ip = &i;

	double *pd;

	i = static_cast<int>(d);

	d = static_cast<double>(i);

	pd=static_cast<double*>(ip); 

	i = static_cast <int>(&i);

	return 0;
}

