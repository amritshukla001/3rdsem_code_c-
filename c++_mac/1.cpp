#include <iostream>

using namespace std;

class base {

//protected:
	//int x;

public:

	void show() {

		cout << "\nhello\n" << endl;
	}

	//void get(int x_) {

		//x=x_;
	//}
};


class derive : public base {

	//int y;

public:

	void show() {

		cout << "\nhello world\n" << endl;
	}

	//void get(int y_) {

		//y=y_;
	//}
};


int main() {

	base obj = base();

	

	obj.show();

	return 0;
}
