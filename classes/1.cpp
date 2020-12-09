//#include <iostream>
//#include <string>

#include <bits/stdc++.h>

using namespace std;
class A{
	int a;
public:
	A(int i){
		a = i;
	}
	void assign(int i){
		a = i;
	}
	int return_value(){
		return a;
	}
};
int main()
{
	A obj;
	obj.assign(5);
	cout<<obj.return_value();
}
