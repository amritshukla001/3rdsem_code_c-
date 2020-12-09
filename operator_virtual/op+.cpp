
#include <iostream>
#include <stdlib.h>
using namespace std;

class COMPLEX {

	int real;
	int img;

public:
	void read() {
	
		cout << "\nReal part: ";
		cin >> real;
		cout << "Img part: ";
		cin >> img;
	}

	COMPLEX operator+(COMPLEX s1) {

		COMPLEX res;
		res.real = real + s1.real;
		res.img = img + s1.img;
		return res;
	}

	 COMPLEX operator+(int a) {

		COMPLEX res;
		res.real = a + real;
		res.img = img;
		return res;
	}

	void disp() {

		cout << "\n" << real << " + " << img << "i\n";
	}
};






int main() {

	COMPLEX s1,s2,res;
	int a,choice;

	while(1) {
		
		cout << "\n*****" << "\n1.Add two complex number" << "\n2.Add integer and complex number" << "\n3.Quit" << "\n*****\n";

		cout << "\nEnter your choice: " ;
		scanf("%d",&choice);

		switch(choice) {

			case 1:	cout << "\nEnter s1: ";
				s1.read();
				cout << "\nEnter s2: ";
				s2.read();
				res=s1+s2;
				cout << "\ns1+s2: ";
				res.disp();
				break;

			case 2: cout << "\nEnter a(int value): ";
				cin >> a;

				cout << "\nEnter s1(complex number): ";
				s1.read();


				res=s1+a;

				cout << "\na+s1: ";
				res.disp();

				break;

			case 3: exit(0);
				break;

			default: printf("\nEnter a valid choice\n");
		}
	}
}

				 

