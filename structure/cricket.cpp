#include <iostream>
#include <string.h>

using namespace std;

struct cricket{
	char p_name[30];
	char t_name[30];
	float b_avg;
};

int main(){
	cricket p_arr[50],temp;
	int n,i,j,k,l,m;
	cout << "How many player details you want to enter(<=50)" <<endl;
	cin >> n;

	// accepting player_info
	for(i=0;i<n;i++){
	    cout << "\nEnter details of player " << i+1 << ":\n";
	    cout << "Enter player name:";
		cin.ignore();
		cin.getline(p_arr[i].p_name,30);
		cout << "Enter player team:";
		cin.getline(p_arr[i].t_name,30);
		cout << "Enter Player Batting Average:";
		cin >> p_arr[i].b_avg;
	} 
	// sorting p_arr[50] structure var. according to team names
	for(j=0;j<(n-1);j++){
		for(int k=0;k<(n-j-1);k++){
			if(strcmp(p_arr[k].t_name,p_arr[k+1].t_name)>0){
				temp = p_arr[k];
				p_arr[k] = p_arr[k+1];
				p_arr[k+1] = temp;
			}
		}
	}
	cout << "\n";
	m=0;
	//output according to teams arranged in alphabatical order
	for(l=0;l<n;l++){
	    /*For Displaying Team Names in Alphabatical Order
	      (Only distinct team name will be displayed,not repetitive)
	     */
       if(strcmp(p_arr[l].t_name,p_arr[m].t_name)!=0 || l==0){
       	cout << "Team Name: " << p_arr[l].t_name;
       	m = l;
       	cout << endl;
       }
		cout << "\nPlayer Name: " << p_arr[l].p_name << endl;
		
		cout << "Player Average: " << p_arr[l].b_avg << endl;

		cout << "\n";
	}


	
	return 0;
}
