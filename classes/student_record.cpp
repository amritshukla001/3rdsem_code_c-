//============================================================================
// Name        : 201900041.cpp
// Author      : Amrit Shukla
// Date & Time : 25th August 2020 1:30pm
// Description : Student Record using classes
//============================================================================

/*
 * Input:
Enter 3 Student Details:

------------------------

Enter Student Details :

Enter Registration No.: 201900041
Student Name: Amrit Shukla
Enter Marks in Subject 1 : 98
Enter Marks in Subject 2 : 97
Enter Marks in Subject 3 : 100

------------------------

Enter Student Details :

Enter Registration No.: 201900016
Student Name: Syead Maaz
Enter Marks in Subject 1 : 98
Enter Marks in Subject 2 : 97
Enter Marks in Subject 3 : 95

------------------------

Enter Student Details :

Enter Registration No.: 201900046
Student Name: Abhinav
Enter Marks in Subject 1 : 89
Enter Marks in Subject 2 : 94
Enter Marks in Subject 3 : 100

*Output:

Student Details :

Registration No.: 201900041
Student Name : Amrit Shukla
Average Marks in three Subject : 98.3333


Registration No.: 201900016
Student Name : Syead Maaz
Average Marks in three Subject : 96.6667


Registration No.: 201900046
Student Name : Abhinav
Average Marks in three Subject : 94.3333

 */

#include <iostream>
using namespace std;

class Student {

	//Member Variables
	char name[30];
	int reg_no;
	float marks[3]; //to store the marks of three Subjects

public:

	//Member Function Declaration
	void read();
	float calc_avg_marks();
	void display();

};

    //Function Definition

void Student :: read() {

	 //Read Student Details

	 cout << "------------------------\n\nEnter Student Details : \n" << endl;

	 cout << "Enter Registration No.: ";
	 cin >> reg_no;

	 cout << "Student Name: ";
	 cin.ignore();
	 cin.getline(name,30);

	 cout << "Enter Marks in Subject 1 : ";
	 cin >> marks[0];

	 cout << "Enter Marks in Subject 2 : ";
	 cin >> marks[1];

	 cout << "Enter Marks in Subject 3 : ";
	 cin >> marks[2];

	 cout << endl;
	 cout << endl;

}

float Student :: calc_avg_marks() {

	//Calculate Average Marks

	float avg_marks;

	avg_marks = (marks[0] + marks[1] + marks[2])/3;

	return avg_marks;

}

void Student :: display() {

	//Display Student Details

	 cout << "Registration No.: " << reg_no << endl;

	 cout << "Student Name : " <<  name << endl;

	 cout << "Average Marks in three Subject : " << calc_avg_marks() << endl;

	 cout << endl;
	 cout << endl;

}

int main() {

	 cout << "Enter 3 Student Details: " << endl;

     cout << endl;
	 cout << endl;

	 //Declaring Student object
	 Student stu1;
	 Student stu2;
	 Student stu3;

	 //Function Call:
	 stu1.read();
	 stu2.read();
	 stu3.read();

	 stu1.calc_avg_marks();
	 stu2.calc_avg_marks();
	 stu3.calc_avg_marks();

	 cout << "----------------------------\n\nStudent Details : \n\n" << endl;

	 stu1.display();
	 stu2.display();
	 stu3.display();

	return 0;
}

