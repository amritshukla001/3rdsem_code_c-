//============================================================================
// Name        : 201900041.cpp
// Author      : Amrit Shukla
// Date & Time : 25th August 2020 11:30am
// Description : Employee Record using classes
//============================================================================

/*
*Input:
Enter 3 Employee Details:

------------------------

Enter Employee Details :

Employee Number: 00
Employee Name: Amrit
Basic Salary: 100000

------------------------

Enter Employee Details :

Employee Number: 01
Employee Name: Syead Maaz
Basic Salary: 150000

------------------------

Enter Employee Details :

Employee Number: 02
Employee Name: Abhinav
Basic Salary: 80000


-----------------------------

*Output:

Employee Details:

Employee Number	: 0
Employee Name	: Amrit
Net Salary: 106400


Employee Number	: 1
Employee Name	: Syead Maaz
Net Salary: 159600

Employee Number	: 2
Employee Name	: Abhinav
Net Salary: 85120


*/

#include <iostream>
using namespace std;

class Employee {

	//Member Variables
	int emp_no;
	char emp_name[30];
	float basic, da, it, net_sal;

public:

	//Member Function Declaration
	void read_data();
	void calc_net_sal();
	void display();

};

//Function Definition

void Employee :: read_data() {

	//Read Employee Details

	cout << "------------------------\n\nEnter Employee Details : \n" << endl;

	 cout << "Employee Number: ";
     cin >> emp_no;

     cout << "Employee Name: ";
     cin.ignore();
	 cin.getline(emp_name,30);

	 cout << "Basic Salary: ";
	 cin >> basic;

	 cout << endl;
	 cout << endl;

}

void Employee :: calc_net_sal() {

	//Calculate Net Salary

	float gross_sal;

	da = 0.52 * basic;
	gross_sal = da + basic;
	it = 0.30 * gross_sal;
	net_sal = gross_sal - it;

}

void Employee :: display() {

	//Display Employee Details

	 cout << "Employee Number	: " << emp_no << endl;

	 cout << "Employee Name	: " << emp_name << endl;

	 cout << "Net Salary: " << net_sal << endl;

	 cout << endl;
	 cout << endl;

}


int main() {

	cout << "Enter 3 Employee Details: " << endl;

	cout << endl;
	cout << endl;

	//Declaring employee object
	Employee emp1;
	Employee emp2;
	Employee emp3;

	//Function Call:
	emp1.read_data();
	emp2.read_data();
	emp3.read_data();

    emp1.calc_net_sal();
    emp2.calc_net_sal();
    emp3.calc_net_sal();

    cout << "-----------------------------\n\nEmployee Details:\n\n" << endl;

    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}

