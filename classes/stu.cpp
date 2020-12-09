//============================================================================
// Name        : 201900041.cpp
// Author      : Amrit Shukla
// Date & Time : 01st September 2020 12:00pm
// Description : Student Record using classes
//============================================================================

# include <iostream>

using namespace std;

//Declare Class Student
class Student {

    //Member Variables
    char usn[30];
    char name[30];
    float marks[3]; //to store the marks of three test

public:

    //Member Function Declaration
    void read();
    float calc_avg_marks_2();
    void display();

};

// Define Function read()

void Student :: read(){

    //Read Student Details

    cout << "Enter USN No.: ";
    cin >> usn;
    
    cout << "Student Name: ";                                                                                                                                                                                          cin.ignore();
    cin.getline(name,30);

    cout << "Enter Marks in Test 1 : ";
    cin >> marks[0];

    cout << "Enter Marks in Test 2 : ";
    cin >> marks[1];

    cout << "Enter Marks in Test 3 : ";
    cin >> marks[2];

    cout << endl;

}

// Define Function calc_avg_marks()

float Student :: calc_avg_marks_2() {

    //Calculate Average Marks

    float avg_marks;
    
    if((marks[0] + marks[1]) > (marks[0] + marks[2]) && (marks[0] + marks[1]) > (marks[1] + marks[2]))
        avg_marks = (marks[0] + marks[1])/2;
    
    else if((marks[1] + marks[2]) > (marks[0] + marks[2]) && (marks[1] + marks[2]) > (marks[0] + marks[1]))
        avg_marks = (marks[1] + marks[2])/2;
        
    else
        avg_marks = (marks[0] + marks[2])/2;
    
    return avg_marks;

}

void Student :: display() {

    //Display Student Details

    cout << "USN No.: " << usn << endl;

    cout << "Student Name : " <<  name << endl;

    cout << "Average of two better Marks: " << calc_avg_marks_2() << endl;

    cout << endl;
    
}

int main() {
    
    //Declare var.
    int i, n;
    
    //Declare array object
    Student stu[10];
    
    //Read n
    cout << "How many Student Details you want to enter: " << endl; 
    cin >> n;
    
    cout << "\n---------Enter Student Details--------" << endl;
    
    for( i=0 ; i<n ; i++) {
        
        //Read student details
        cout << "\nEnter Details of " << i+1 << " Student\n" << endl;
        stu[i].read();
        
        //Calculate avg of the better two
        stu[i].calc_avg_marks_2();
    
    }
    
    //Display Student Details
    cout << "\n-----------The following are the Student Details:--------------\n" << endl;
    
    for( i=0 ; i<n ; i++) {
        
        stu[i].display();
    
    }
    
    return 0;
}
         
         
