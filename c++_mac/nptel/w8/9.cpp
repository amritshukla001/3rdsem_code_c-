#include <iostream> 
using namespace std;

typedef struct complex_num {

	int r, i;

}COMPLEX;

template<class T>

T operator+(T& a, T& b) {

	return a + b;

}

template<>

COMPLEX operator+(COMPLEX& a, COMPLEX& b) {

COMPLEX c;

c.r = a.r + b.r;

c.i = a.i + b.i;

return c;

}

int main() {

int a = 10, b = 20;

COMPLEX c1 = { 10, 20 }; 
COMPLEX c2 = { 30, 40 };

int c = a + b;

cout << c << endl;

COMPLEX c3 = c1 + c2; 

cout << c3.r << " , " << c3.i;

return 0;
}
