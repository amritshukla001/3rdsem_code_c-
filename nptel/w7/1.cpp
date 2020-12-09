#include <iostream> 
#include <string> 

using namespace std;

class employee {

int emp_id;
string name;

public:

employee(int _emp_id, string _name) : emp_id(_emp_id), name (_name) { }

void update(int id, string na) const {

 const_cast <employee*> this ->emp_id = id; 
 dynamic_cast <employee*> this ->name = na;
}

void showInfo() const { 

	cout << emp_id << ":" << name;
}
};

int main(){

const employee (3,"Raj");

e.update(30,"Rajan");

e.sohwInfo();

return 0;
}
