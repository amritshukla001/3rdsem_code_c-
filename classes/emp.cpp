# include <iostream>

using namespace std;

// Declare class
class Employee {

    //Declare data members
	int emp_code;
	char name[30];
	float gross_sal;

public:
    //Declare member functions
	void read_data();
	void display();

};

//Define function read_data
void Employee :: read_data() {

	 cout << "Employee Code : ";
     cin >> emp_code;

     cout << "Employee Name : ";
     cin.ignore();
	 cin.getline(name,30);

	 cout << "Gross Salary : ";
	 cin >> gross_sal;

	 cout << endl;

}


//Define function display
void Employee :: display() {


	 cout << "Employee Code : " << emp_code << endl;

	 cout << "Employee Name : " << name << endl;

	 cout << "Gross Salary : " << gross_sal << endl;

	 cout << endl;

}


int main() 
{
    int i, n;
    
    //Declare array object
	Employee emp[10];
	
	//Read n
	cout << "How many Employees detail you want to enter (<=10)" << endl;
	cin >> n;

    cout << "\n----------Enter Details of Employees : ----------------" << endl;
    cout<<endl;
    
    //Call read_data function  
	for( i=0; i<n ; i++) {
	    
	    cout << "\nEnter details of " << i+1 <<  " Employee\n" << endl;
	    emp[i].read_data();
	
	}
	
	cout << "\n----------These are the following details of Employees : -------------\n" << endl;
    
    //Call display function 
    for( i=0; i<n ; i++) {
       
        emp[i].display();
    
    }
    
    return 0;

}
