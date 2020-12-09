#include <bits/stdc++.h> 
using namespace std; 
  
class Integer { 
private: 
    int i; 
  
public: 
    // Parameterised constructor 
    Integer(int i = 0):i(i) 
    { 
       // this->i = i; 
    } 
  
    // Overloading the postfix operator 
    Integer operator--(int) //standard for differentiating between post and pre
    { 
        Integer temp; 
        temp.i = i--; 
        return temp; 
    }

    Integer operator--() {

	Integer temp;
	temp.i = --i;
	return temp;
  } 
  
    // Function to display the value of i 
    void display() 
    { 
        cout << "i = " << i << endl; 
    } 
}; 
  
// Driver function 
int main() 
{ 
    Integer i1(5),i2(5); 
  
    cout << "Before decrement: "; 
    i1.display(); 
   i2.display();
  
    i2 = --i1; 
  
    cout << "After pre decrement: ";
    i1.display(); 
    i2.display();
    // Using the post-decrement operator 
    i2 = i1--; 
  
    cout << "After post decrement: ";
    i1.display(); 
    i2.display(); 
} 
