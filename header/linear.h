/*
	This is linear.h file: Header File
	-Define function : linear search function
	-Input  

*/

int linear_search(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++){
		if(a[i] == key)
			return i;
	}

	return -1;
}
