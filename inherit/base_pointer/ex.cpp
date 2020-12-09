#include <iostream>                                                                                                                                                                                                
using namespace std;

class BC {

public:

        int bc;

        BC() {

                cout << "\n*Base Class Constructor Called*\n" << endl;
        }

        void disp() {

                cout << bc << endl;
        }

        ~BC() {

                cout << "\n*Base Class Destructor Called*\n" << endl;                                                                                                                                                    }
};

class DC : public BC {

public:
        int dc;

        DC() {

                cout << "\n*Derived Class Constructor Called*\n" << endl;
        }

         void disp() {

                cout << bc << endl;
                cout << dc << endl;
        }

        ~DC() {

                cout << "\n*Derived Class Destructor Called*\n" << endl;
        }
};

int main() {

        BC *bcptr;                
        
        DC der;

        bcptr=&der; 
      
        bcptr->bc=100;
       
        /*bcptr->dc=400
        This wont work as dc is a derive class member
        which cannot be accessed by base class pointer
        */

        ((DC *)bcptr)->dc=400;

        
        ((DC *)bcptr)->disp();

       
}
