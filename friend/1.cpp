#include<iostream>
using namespace std;
 
class DB;
 
class DM {
    
    friend DM add(DM,DB);
    
    int m;
    double cm;

public:
    
    void read() {
        
        cout << "Enter distance(in meters and centimeters): "<<endl;
        cout << "Enter meters: ";
        cin >> m;
        cout << "Enter centimeters: ";
        cin >> cm;
    }
    
    void display() {
        cout << "\nDistance = " << m << " m & " << cm<< " cm\n";
    }
         
    int get_m() {
        return m;
    }
    
    double get_cm() {
        return cm;
    }
};
 
class DB
{   
    friend DM add(DM,DB);
    
    int feet;
    double inch;
    
public:
    
    DB() {
        feet = inch =0;
    }
    
    DB(DM dm) {
        
        double tot_inch;
        tot_inch = (dm.get_m()*100 + dm.get_cm())*0.39;
        feet = tot_inch/12;
        inch = tot_inch - (feet*12);
    }
    
    void read() {
        
        cout << "\nEnter distance(in feet and inches): "<< endl;
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inch;
    }
    
    void display() {
        cout << "\nDistance = " << feet << " feet & " << inch << " inch\n";
    }
};
 
DM add(DM m_cm,DB f_inch) {
    
    DM temp;
     
    double cm,in,tot_cm,tot_in;
    
    cm = m_cm.m*100 + m_cm.cm;
    in = f_inch.feet*12 + f_inch.inch;
     
    tot_cm = cm + in*2.5;
    tot_in = in + cm*0.39;
     
    temp.m = tot_cm/100;
    temp.cm = tot_cm - (temp.m*100);
     
    return temp;
     
}
 
int main() {
    
    DM obj1;
    DB obj2;
    
    obj1.read();
    obj2.read();
    
    cout<<"\nAFTER ADDITION: \n";
    
    DM obj3;
    DB obj4;
    
    obj3 = add(obj1,obj2);
    obj4 = add(obj1,obj2);
    
    obj3.display();
    obj4.display();
    
    return 0;
}
