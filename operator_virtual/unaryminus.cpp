/*
Name-Shashwat Shrivastava (201900377)
Semester-3     Section-C

Algorithm-
Step 1: Start the program.
Step 2: Declare the class "Numbers".
Step 3: Declare the variables and its member function.
Step 4: Use the function void accept() to get the two numbers.
Step 5: Define the function operator-() to change the sign.
Step 6: Define the disp function.
Step 7: Declare the class object inside main().
Step 8: Call the disp function to display initial values and their addition.
Step 9: Call the -obj function to change sign.
Step 10: Call the disp function to display the changed values and their addition.
Step 11. Stop
*/

#include<iostream>
using namespace std;

class Numbers {
        
	int x, y;
        int z;
public:
        void accept() {
                
		cout << "\n First Number   :  ";
                cin >> x;
                cout << "\n Second Number  :  ";
                cin >> y;
        }
        
	void display() {
                
                cout << x << "\t" << y;
        }
        
	void show() {
            cout << "\nAddition= " << z;
        }
        
	friend void operator-(Numbers &obj) {
                obj.x=-obj.x;
                obj.y=-obj.y;
        }
        
	void sum() {
            z=x+(y);
        }
};

int main() {
        
	Numbers num;
        
	num.accept();
        
	cout << "\n Numbers are :\n\n";
        num.display();
	num.sum();
	num.show();
        
	-num;
        
	cout<<"\n\n Negated Numbers are :\n\n";
        
	num.display();
	num.sum();
        num.show();
        
	return 0;
}
