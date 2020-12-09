#include <iostream> 
using namespace std;

int incr(int* ptr) { 
	return (*ptr)++;
}

int main() {

int val = 10; 

const int *ptr = &val; 

val = incr(const_cast <int*> (ptr));

cout << val;

return 0;

 // LINE-1

} 
