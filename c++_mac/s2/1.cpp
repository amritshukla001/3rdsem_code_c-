#include<iostream>
using namespace std;
 
class Base
{
public:
    virtual void show() = 0;
};
 
int main(void)
{
    Base b;
    Base *bp;
    return 0;
}
