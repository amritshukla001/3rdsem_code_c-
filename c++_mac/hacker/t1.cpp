#include <iostream>

using namespace std;

class Person {
protected:
	char name[100];
	int id;

public: 
	Person() {
		cout << "Person Object Created" << endl;
	}

	~Person() {
		cout << "Person Object Destructed" << endl;
	}
};

class Professor: public Person {

	int publications;

public:	Professor() {
                cout << "Professor Object Created" << endl;
        }

        ~Professor() {
                cout << "Person Object Destructed" << endl;
        }

};

int main() {

	Person *p;

	p=new Person;

	return 0;
}
