/*
Name - Amrit Shukla
Reg no.- 201900041
Description:
Write a program in C++ to create a class named TIME that stores two time values in hours (float) and minutes (integer). Perform the following operations by using a function add():- 

Add T1+T2 where , T1 and T2 are time objects.

 Add T1+x where T1 is a TIME object and x is any integer. 

Return time objects from the member function to main() and display
Algorithm:
STEP 0:  Start
STEP 2:  Declare the class name as Time with data members and member functions.
STEP 3:  Read the choice x,hours minutes from the user.
STEP 4:  The function add() to find the addition of t1 + t2 with minute as integer and hours as float argument.
STEP 5:  The function add() to find the addition of t1+x with minute and x as two integer argument and hour as float.
STEP 6:  Display the user input values also in the output 
STEP 7:  Add the two time functions t1 and t2 to keep it in hours:minutes format
SYEP 8:  Add the two time functions t1 and x to keep it in hours:minutes format
STEP 9:  Stop
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

//Define class Time
class Time {
//Declare class member var.
    float hours;
    int minutes;

public:
//Declare member functions
    void get(void);
    void disp(void);
    friend Time addTime(Time,Time);
    friend Time addTime(Time,int);
};

//Define member functions:
void Time::get(void) {

    cout << "Hours: ";
    cin>>hours;
    cout << "Minutes: ";
    cin>>minutes;
}                                                                                                                                                                                                                  

void Time::disp(void) {

    cout << hours << ":" << minutes << endl;
}

//function to add time
Time addTime(Time T1,Time T2) {

    Time t;
    if(T1.minutes + T2.minutes >= 60) {

        t.minutes = T1.minutes + T2.minutes - 60;
        t.hours= T1.hours + T2.hours + 1;
    }

    else {

        t.hours= T1.hours + T2.hours;
        t.minutes= T1.minutes + T2.minutes;
    }

return t;
}

//function to add time and integer
Time addTime(Time T1,int x) {

    Time t;

    t.minutes = T1.minutes + x%60;
    t.hours = T1.hours + (x/60) + x;

    return t;
}

int main() {

    int x, choice;
    //Declare class Time objects
    Time T1,T2,T3,T4,T5;
    
    while(1) {
        
        cout << "\n---------------" << endl;
        cout << "1.Add T1+T2" << endl;
        cout << "2.Add T1+x" << endl;
        cout << "3.Quit" << endl;
        
        cout << "\nEnter Choice: ";
        cin >> choice;  //Read choice
        
        switch(choice) {
            
            case 1: cout << "\nEnter T1:" << endl;
                    T1.get();
                    
                    cout << "\nEnter T2:" << endl;
                    T2.get();
                    
                    T3 = addTime(T1,T2);  //call addTime(Time,Time) function
                    
                    //Display result
                    cout << "\nT1: ";
                    T1.disp();
                    cout << "\nT2: ";
                    T2.disp();
                    cout << "\nT1+T2: ";
                    T3.disp();
                    break;
                    
            case 2: cout << "\nEnter T1:\n";
                    T4.get();
            
                    cout << "\nEnter x: ";
                    cin >> x; //Read x
                    
                    T5 = addTime(T4,x); //call addTime(Time,int) function
                    
                    //Display result
                    cout << "\nT1: ";
                    T4.disp();
                    cout << "\nx: " << x;
                    cout << "\n\nT1+x: ";
                    T5.disp();
                    break;
                    
            case 3: exit(0);
            
            default: "\nEnter a valid choice: ";
                    
        }
    }

    return 0;
}
