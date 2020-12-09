#include <iostream>

using namespace std;

namespace cust_error {

	class error { };
	class spec_error : public error { };
	class unknown_error : public error { };
	void f()  { throw unknown_error(); }
};

int main() {

        try {
                cust_error :: f();
        }

        catch(cust_error::spec_error&) {
                cout << "specific error" << endl;
        }

        catch(cust_error::error&) {

                cout << "error" << endl;
        }

        catch(cust_error::unknown_error&) {
        
                cout << "unknown error" << endl;
        }

        catch(...) {

                cout << "Default" << endl;
        }

        return 0;
};



