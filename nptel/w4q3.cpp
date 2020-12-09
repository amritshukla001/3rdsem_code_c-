#include <iostream>
using namespace std;

class Complex {

	int re,im;
public:

	Complex(int r=0,int i=0) : re(r), im(i) { }
	
	Complex& operator<< (const Complex& c) {
		cout << re+c.re << " " << im + c.im << endl;
		return *this;
	}

	 friend Complex& operator<<(ostream& os,Complex& c);
}; 
	
Complex& operator<<(ostream&, Complex& c) {
		cout << c.re << " " << c.im << endl;
		return c;
}
	


int main() {

	Complex c1(2,5), c2(4,6);
	
	cout << c1 << c2;

	return 0;
}
