/*Difference between lifetime and scope
Lifetime-interval of the programme in which storage is bound for the var.
Scope-where the var can be acccessed
*/ 

#include <iostream>
using namespace std;

void function(void);

static int c = 5; // Global static variable

int main()
{
	 while(c--)
	{
		function();
		cout << c << endl;
	}
	return 0;
}

void function( void )
{
static int cnt = 2;
cnt++;
cout << "cnt is " << cnt ;
cout << " and c is " << c << std::endl;
}
