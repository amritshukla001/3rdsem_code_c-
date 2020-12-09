#include <iostream>

using namespace std;

class A

{

public:

int a;

A operator++(){a++;}

};

int main()

{

A ob1, ob2;

ob2.a=5;

ob1=ob2++; 

cout<<ob1.a;

return 0;

}
