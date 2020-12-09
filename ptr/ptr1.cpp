#include <iostream>
using namespace std;

int count(int *ptr){
	int *a;
	a = ptr;
	while(*(a) != -1){
		a++;
	}
	return a - ptr;
}
	
		

int main(){

	// count the number of elements in the array util -1 is entered
	
	int arr[]  = {1,2,3,-1};
	cout << count(arr) << endl;

	return 0;
}
