#include <iostream>

using namespace std; 
class A 
{ 
    int i, j; 
public: 
    void read()
    {
        cin>>i>>j;
    }
    void show()
    {
        cout<<i<<endl<<j<<endl;
    }
    friend A operator++(A *obj, int x);
}ob1, ob2;
A operator++(A *ob1, int x)
{
    A temp=ob1;
    ++(ob1.i);
    ++(ob1.j);
    return temp;
}
int main()
{
    ob1.read(); // Assume that 4 and 5 are entered for this read() function
    ob1.show(); // 4 and 5 will be displayed by this show() function
    ob2=ob1++; // old value of ob1 will be copied in ob2.
    ob2.show();//4 and 5 will be displayed by this show() function
    ob1.show(); // 4 and 5 will be displayed by this show() function
    return 0;
}

