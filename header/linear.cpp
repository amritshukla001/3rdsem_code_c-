#include <iostream>
#include "linear.h"

/*user defined header file 
  search in the same directory
*/

using namespace std;

int main(){
	
	int arr[100],n,k,i;
	cout << "Enter size" << endl;
	cin >> n;
	cout << "Enter your array element" << endl;
	for(i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << "Enter key element" << endl;
	cin >> k;
	//Call the function
	int ans = linear_search(arr,n,k);
	if(ans == -1)
		cout << "Key element not found" << endl;
	else
		cout << "Element found at index " << ans << endl; 
	return 0;

}


