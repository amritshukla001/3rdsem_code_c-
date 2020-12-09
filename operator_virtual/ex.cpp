#include <iostream>                                                                                                                                                                                                
using namespace std;

class BC {

public:

    int bc;

    BC() {
        cout << "\n*Base Class Constructor Called*\n" << endl;
    }

    void disp() {
        cout << "\nBase Class member(bc): " << bc << endl;
    }

    ~BC() {
        cout << "\nBase Class Destructor Called*\n" << endl;
    }
};

class DC : public BC {

public:
    
    int dc;

    DC() {
        cout << "\n*Derived Class Constructor Called*\n" << endl;
    }

    void disp() {
        cout << "\nBase Class Member(bc): " << bc << endl;
        cout << "\nDerive Class Member(dc): " << dc << endl;
    }

    ~DC() {
        cout << "\n*Derived Class Destructor Called*\n" << endl;
    }
};

int main() {

        BC *bcptr;                   //base pointer

        /*Declaring Dervie class object cretes a base class instance
        so both base class and derive class constructor is called*/
        DC der;

        bcptr=&der; //bptr points to base class instance of derive class object

        //base class pointer can only access base class members

        bcptr->bc=100;
        // access bc directly via base class pointer

        /*bcptr->dc=400
        This wont work as dc is a derive class member
        which cannot be accessed by base class pointer
        */

        //accessing dc using a pointer of derive class
        ((DC *)bcptr)->dc=400;

        //display the result
        ((DC *)bcptr)->disp();

        /*first derive class destructor is called,
            then base class destructor*/
}
