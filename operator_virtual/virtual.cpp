#include<iostream>
using namespace std;

class Figure {

public:        
    
    double a,b;
    
    //read a and b
    void read() {
        cout << "\n\nEnter a: ";
        cin >> a;
        cout << "\nEnter b: ";
        cin >> b;
    }
    
    // Declare virtual function area()    
    virtual void area() = 0; 
};
 
class Triangle:public Figure {
    
public: 
    
    void area () {
        cout << "\nArea of the Triangle : " << 0.5*a*b << endl;
    }
};
 
class Rectangle:public Figure {
    
public: 
    
    void  area () {
        cout << "\nArea of the Rectangle : " << a*b << endl;
    }
};
 
int main()                                                                
{   
    Triangle T;
    Figure *FT = &T;
    
    cout << "\nEnter Base and Altitude of the Triangle : ";
    FT->read(); //read base and altitude
    
    FT->area(); //display area
 
    Rectangle R;
    Figure *FR = &R;
    
    cout << "\nEnter Length and Breadth of the Rectangle : ";
    FR->read(); //read length and breadth
    
    FR->area(); //display area
    
    return 0;   
}
