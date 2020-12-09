/*
Author: Amrit Shukla
Date: 21/08/2020
Description: A programme to merge two arrays: a & b and store the merged array in :a
Improvements: Symbolic constant-Maintainance of the programme,Indentation,Documentation and comments wherever required
*/

//name of laws that evolved with time-IPR
//validity of patent - 20 years

//in an array bound check is not done by default by compiler
// so do bound check manulally
// If(size > 100)
//printf("Error:Bound Check,Max Size=100"
//Optimise your code,discard unnecessary variables
//use dynamic memory allocation

//Algo:
//Input array(int) a&b
//n1=size of array a n2=size of array 
//for(i=0 to n-1) and then for(j=0 to m-1)
//Read c[k] k=0 then k++

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	int *a,*b,*c;
	int size_a,size_b,k,i;
	
	//Read size of array a and array b
	cout << "enter size_a" << endl;
	cin >> size_a;
	
	cout << "enter size_b" << endl;
	cin >> size_b;
	
	//Dynamically allocate memory
	a = (int *)malloc((size_a+size_b) * sizeof(int));
	b = (int *)malloc(size_b * sizeof(int));
	
	//Input elements in array a and b
	cout << "Enter 1st array" << endl;
	for(i=0;i<size_a;i++){
		cin >> a[i];
	}
	
	cout << "Enter 2nd array" << endl;
	for(i=0;i<size_b;i++){
		cin >> b[i];
	}

	for(i=size_a,k=0;i<size_b,k<size_b;i++,k++){
		a[i] = b[k];
	}

	cout << endl;
	
	//Merge array a and b
	cout << "Mergerd array is :" << endl;
	for(i=0;i<(size_a+size_b);i++){
		cout << a[i] << "\t";
	}

	cout << endl;
	
	free(a);
	
	free(b);
	
	return 0;
	
}
	

