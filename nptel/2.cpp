#include <iostream> 
 
using namespace std;

int i=0;

class myClass 
{  

public: 
	myClass() { 
		i=1; 
	} 
	
	~myClass() { 
		i=5; 
	} 
};


void f() {

	myClass m;
}

int fun() {

	i=3;
	f();

	return i++;
}

int main() {

	cout << fun() << " ";
	cout << i << endl;
	
	return 0;
}
	
