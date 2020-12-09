#include <iostream>
#include <string.h>

using namespace std;

struct census{
	//char city[30];
	string city;
	long pop;
	float lit;
};

int main(){
	census c_arr[5];//initialising census structure var. c_arr[5]
	census temp;
	int i,j,k,n=5,l;
	//accessing city details
    cout << "Hey There!!Enter details of 5 cities:\n" << endl;
	for(i=0;i<n;i++){
	    cout << "Enter city details of city " << i+1 << endl;
	    cout << "Enter city name:";
		/*if(i>0){
			cin.ignore();
		}*/
		//cin.getline(c_arr[i].city,30);
		cin >> c_arr[i].city;
		cout << "Enter Population:";
		cin >> c_arr[i].pop;
		cout << "Enter Literacy level:";
		cin >> c_arr[i].lit;
	}
	//sorting c_arr[5] alphabatically according to city name
	for(j=0;j<(n-1);j++){
		for(k=0;k<(n-j-1);j++){
			if(c_arr[k].city.compare(c_arr[k+1].city)>0){
				temp = c_arr[k];
				c_arr[k] = c_arr[k+1];
				c_arr[k+1] = temp;
			}
		}
	}
	//displaying info. alphabatically according to city name
	cout << "\nCity Records:\n" << endl;
	for(l=0;l<n;l++){
		cout << "City Name:" << c_arr[l].city << endl;
		cout << "Population:"<< c_arr[l].pop << endl;
		cout << "Literacy:"<< c_arr[l].lit << endl;
		cout << "\n";


	}

	return 0;

}
