//Write a program in C++ to create a class named student, create all types of constructor and destructor for the class and demonstrate sequence of execution of constructors and destructors.

//derefrence the memory when it goes out of bound/scope

#include <iostream>
#include <cstring>

using namespace std; 

class Student {

	char name_[50];
	int regno_;
	int year_;
	int sem_;

public:
	Student();
	~Student();
	Student(char [],int,int,int);
	Student(const Student &obj);
	void display();
};

Student :: Student() {
	
	strcpy(name_,"Sharma");
	regno_ = 0;
	year_ = 1;
	sem_ = 1;
}

Student :: ~Student() {

	cout << "\n\nDestructor Called" << endl;
} 

Student :: Student(char s[],int regno,int year,int sem) {
	
	strcpy(name_,s);
	regno_ = regno;
	year_ = year;
	sem_ = sem;
} 

Student :: Student(const Student &obj) {

	strcpy(name_,obj.name_);
	regno_ = obj.regno_;
	year_ = obj.year_;
	sem_ = obj.sem_;
}

void Student :: display() {

	cout << "\n\nName: " << name_ << "\nRegno: " << regno_ << "\nYear: " << year_ << "\nSem: " << sem_; 
}

int main() { 

	Student s1("Amrit Shukla",201900041,2,3);

	Student s2 = s1;

	Student s3;
	
	cout << "\nParameterize Constructor:";
	s1.display();
	
	cout << "\n\n\nCopy Constructor:";
	s2.display();
	
	cout << "\n\n\nDefault Constructor:";
	s3.display();
}
