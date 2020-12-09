#include <iostream>
#include <stdlib.h>

/* 201900377
   Translation@29
*/
using namespace std;

class complex {
  
    int r,i;
  
    public:
    
    void get();
    void disp();
    friend complex add(int,complex);
    friend complex add(complex,complex);
};

void complex::get() {
  
    cout << "Real Part: ";
    cin >> r;
  
    cout << "Imaginary Part: ";
    cin >> i;
}

void complex::disp() {
  
    cout <<r << "+i" << i << endl;
}

complex add(int a,complex c) {
  
    complex t;
    t.r=a+c.r;
    t.i=c.i;
    return t;
}

complex add(complex c1,complex c2) {
  
    complex t;
    t.r=c1.r+c2.r;
    t.i=c1.i+c2.i;
    return t;
}


int main()
{
    int a, choice;
    complex s1,s2,s3,s4,s5;
    
    while(1) {
        
        cout << "1.Addition of Two Complex Number" << endl;
        cout << "2.Addition of Integer(Real Part) and Complex Number" << endl;
        cout << "3.Quit" << endl;
        
        cout << "\nEnter Choice: ";
        cin >> choice;
        
        switch(choice) {
            
            case 1: cout << "\nEnter first complex number:\n" << endl;
                    s1.get();
                
                    cout << "\nEnter second complex number:\n" << endl;
                    s2.get();

                    s3 = add(s1,s2);
                    
                    cout << "\ns1: ";
                    s1.disp();
                    
                    cout << "\ns2: ";
                    s2.disp();

                    cout<<"\nSum: ";
                    s3.disp();

                    cout << endl;
                    break;
            
            case 2: cout << "\nEnter Integer(only Real part):";
                    cin >> a;

                    cout << "\nEnter complex number:\n" << endl;
                    s4.get();

                    s5 = add(a,s4);
                    
                    cout << "\na: " << a;
                    
                    cout << "\ns2: ";
                    s4.disp();
        
                    cout<<"\nSum: ";
                    s5.disp();
                    
                    cout << endl;
                    break;
                    
            case 3: exit(0);
            
            default: cout << "\nEnter a Valid Choice" << endl;
        }
    }

    return 0;
 }
