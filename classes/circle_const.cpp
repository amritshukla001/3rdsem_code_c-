//============================================================================
// Name        : 201900041.cpp
// Author      : Amrit Shukla
// Registration No.: 201900041
// Date and Time : 18/08/2020 7:23
// Description: To create a class name circle and its associated operations.
//============================================================================

#include <iostream>
using namespace std;


class Circle {

//Declaring member variables
private:
	float radius;
	float area;
	const float pi=3.14;

//Declaring member functions
public:
	void set(float r);
	void calc_area(void);
	void display(void);

};

void Circle::set(float r) {
	radius = r;
}

void Circle::calc_area(void) {
	area = pi * radius * radius;
}

void Circle::display(void){
	cout << "Radius = " << radius << endl;
	cout << "Area = " << area << endl;
}

//Main Function satrts here
int main() {
    
	//Creating object of class circle
	Circle c1;
	float r;
	cout << "Enter Radius of Circle:" << endl;
	cin >> r;
	//Invoking member functions of class circle
	c1.set(r);
	c1.calc_area();
	c1.display();

	return 0;
}


