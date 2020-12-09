#include<iostream>
#include<math.h>
using namespace std;

class C_Power
{
    double m;
    int n;
    
    public:

    double Power (double m , int n=2)
    {
        return (pow(m,n));
    }
    
    int Power (int m, int n)
    {
        return (pow(m,n));
    }
    
    void get()
    {
        cout << "\nEnter m: ";
        cin >> m;
        cout << "Enter n: ";
        cin >> n;
    }
    
  
};

int main()
{   
    C_Power c;
    
    //Re
