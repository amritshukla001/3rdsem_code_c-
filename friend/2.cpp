#include<iostream>
using namespace std;

class twovalues {
    
    friend class min_max;
    
    int num1_;
    int num2_;

public:
    
    void read(int num1,int num2) {
        
        num1_=num1;
        num2_=num2;
    }
        
};

class min_max
{
    int max;
    int min;
    
public:
        
    void find(twovalues ob) {
        
        if(ob.num1_>ob.num2_) {
            max=ob.num1_;
            min=ob.num2_;
        }
        
        else {
            max=ob.num2_;
            min=ob.num1_;
        }
            
        cout << "\nMax = " << max << "\nMin = " << min << endl;
    }
};

int main() {
    
    int num1,num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "\nEnter num2: ";
    cin >> num2;
    
    twovalues ob1;
    ob1.read(num1,num2);
    
    min_max x;
    x.find(ob1);
    
    return 0;
}
