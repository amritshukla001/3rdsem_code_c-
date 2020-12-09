/*Director->Manager->Enginerr

C++ soln*/


#include <iostream>
using namespace std;

class Engineer {

protected: 
	string name_;

public:

	Engineer(const string& name):name_(name) { }
	virtual void sal() {
		cout << "\nEngineer Sal\n" << endl;
	}
};

class Manager: public Engineer {

public:
	Manager(const string& name):Engineer(name) { }
	void sal() {
		cout << "\nManae Salary\n" << endl;
	}
};

class Director:public Manager {

public:
	Director(const string& name):Manager(name) { }
	void sal() {
		cout << "\nManager Salary\n" << endl;
	}
};

int main() {

	Engineer e1("e1");
	Manager m1("m1");
	Director d1("d1");

	Engineer *staff[]={&e1,&m1,&d1};

	for(int i=0;i<sizeof(staff)/sizeof(Engineer*);++i)
		staff[i]->sal();
}
