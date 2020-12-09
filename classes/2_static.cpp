//#include <iostream>

#include <bits/stdc++.h>
using namespace std;

class Test
{
    static int x;
  public:
    Test() { x++; }
    static int getX() {return x;}

   //int getX() {return x;}
};

int Test::x = 1;

int main()
{
    cout << Test::getX() << " ";
    //cout << getX() << " ";
    Test t[5];
    //cout << getX() << " ";
    cout << Test::getX();
}
