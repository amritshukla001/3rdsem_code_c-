#include <iostream>
using namespace std;

class Point {

	int x,y;
public:
	Point(int _x,int _y) : x(_x), y(_y) { }
	void changePoint(Point *new_pt) { this = new_pt;}
	void show() { cout << x << "," << y << endl;}
};

int main() {

	Point p1(10,20);
	Point p2(20,50);

	p1.changePoint(&p2);
	p1.show();

	return 0;
}
