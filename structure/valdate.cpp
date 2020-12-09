//============================================================================
// Name        : 201900041.cpp
// Author      : Amrit Shukla
//Registration No.: 201900041
//Date & Time : 18/08/2020 & 20:13
// Description : Implementing Date structure,reading Date,validating Date and displaying Date in given format.
//============================================================================

#include <iostream>
using namespace std;

//Declaring Structure Date

struct Date {
	int day;
	int month;
	int year;
};

//Function Declaration

Date read(Date);

bool validate(Date);

void display(Date);

//Main Function

int main() {
	//Creating structure variable
	Date date;
	//Invoking read(Date) function
	date = read(date);
	//Invoking validate(Date) function
	validate(date);
	//Invoking display(Date) function
    display(date);
    return 0;
}

//Function Definition

Date read(Date date){
	//Inputting elements in structure date
	cout << "Enter Day" << endl;
	cin >> date.day;
	cout << "Enter Month" << endl;
	cin >> date.month;
	cout << "Enter Year" << endl;
	cin >> date.year;
	return (date);
}

//Validating date
bool validate(Date date){
	//Checking condition for date,month and year
	if (date.year > 9999 || date.year < 1800)
	    return false;
	if (date.month < 1 || date.month > 12)
	    return false;
	if (date.day < 1 || date.day > 31)
	    return false;

	//handling February months
	if (date.month == 2)
	    {	//checking for leap year
	        if (((date.year % 4 == 0) && (date.year % 100 != 0)) || (date.year % 400 == 0))
	        return (date.day <= 29);
	        else
	        return (date.day <= 28);
	    }

	//Checking for months which has less than equal to 30 days
	if (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11)
	        return (date.day <= 30);

	    return true;
}

//Displaying date if valid
void display(Date date){
	if(validate(date)) {
		cout << endl;
		//Displaying month name according to month number
		switch(date.month){
		case 1:cout << "January\t" << date.day << "\t" << date.year;
		break;
		case 2:cout << "February\t" << date.day << "\t" << date.year;
		break;
		case 3:cout << "March\t" << date.day << "\t" << date.year;
		break;
		case 4:cout << "April\t" << date.day << "\t" << date.year;
		break;
		case 5:cout << "May\t" << date.day << "\t" << date.year;
		break;
		case 6:cout << "June\t" << date.day << "\t" << date.year;
		break;
		case 7:cout << "July\t" << date.day << "\t" << date.year;
		break;
		case 8:cout << "August\t" << date.day << "\t" << date.year;
		break;
		case 9:cout << "September\t" << date.day << "\t" << date.year;
		break;
		case 10:cout << "October\t" << date.day << "\t" << date.year;
		break;
		case 11:cout << "November\t" << date.day << "\t" << date.year;
		break;
		case 12:cout << "December\t" << date.day << "\t" << date.year;
		}
	}
	else{
		cout << "Date is not valid" << endl;
	}
}

