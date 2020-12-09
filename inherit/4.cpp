#include <iostream>

using namespace std;

class STUDENT {

protected:
    char usn[30];
    char name[30];
    int age;
    
public:
    
    void read_stu() {
        
        cout << "\nEnter USN: ";
        cin.ignore();
        cin.getline(usn,30);
        cout << "\nEnter Name: ";
        cin.getline(name,30);
        cout << "\nEnter Age: ";
        cin >> age;
    }
};

class UGSTUDENT : public STUDENT {
    
    int sem;
    float fees;
    float stp;
    
public:
    void read_ugstu() {
        
        read_stu();
        cout << "\nEnter Semester No.: ";
        cin >> sem;
        cout << "\nEnter Fees: ";
        cin >> fees;
        cout << "\nEnter Stipend: ";
        cin >> stp;
        cout << "\n-----------\n";
    }
    
    friend void avg(UGSTUDENT* ug,int ugnum) {

        int sem,i;

        for(sem=1;sem<=8;sem++) {

            int count=0,found=0;
            float sum=0,avg;

            for(i=0;i<ugnum;i++) {
                
                if(ug[i].sem==sem) {
                    
                    sum+=ug[i].age;
                    found=1;
                    count++;
                }
            }

            if(found==1) {
                avg=sum/count;
                cout << "\nsem: " << sem << "\navg age: " << avg << endl;
            }
        }
    }
};


class PGSTUDENT : public STUDENT {
    
    int sem;
    float fees;
    float stp;
    
public:
    void read_pgstu() {   
           
        read_stu();
        cout << "\nEnter Semester No.: ";
        cin >> sem;
        cout << "\nEnter Fees: ";
        cin >> fees;
        cout << "\nEnter Stipend: ";
        cin >> stp;
        cout << "\n-----------\n";
    }
    
    friend void avg(PGSTUDENT* pg,int pgnum) {

        int sem,i;

        for(sem=1;sem<=8;sem++) {

            int count=0,found=0;
            float sum=0,avg;

            for(i=0;i<pgnum;i++) {
                    
                if(pg[i].sem==sem) {
                        
                    sum+=pg[i].age;
                    found=1;
                    count++;
                }
            }

            if(found==1) {
                    
                avg=sum/count;
                cout << "\nsem: " << sem << "\navg age: " << avg << endl;
            }
        }
    }
};

int main() {
    
    int ugnum,pgnum,i;
    
    cout << "How Many UG Students Data You Want To Enter:(<=5): ";
    cin >> ugnum;
    
    cout << "\nHow Many PG Students Data You Want To Enter:(<=5): ";
    cin >> pgnum;
    
    UGSTUDENT ug[5];
    PGSTUDENT pg[5];
    
    cout<<"\n-------------Enter Details Of Under Graduate Students--------------\n";
    
    for(i=0;i<ugnum;i++)
        ug[i].read_ugstu();
    
    cout<<"\n-------------Enter Details Of Post Graduate Students--------------\n";
    
    for(i=0; i<pgnum; i++)
        pg[i].read_pgstu();
    
    
    cout<<"\n\n------Semester Wise Average Age For All UG And PG Students------\n";
    
    //Calculate Average Age For UG Students 
   cout << "\n-UG-\n";
   avg(ug,ugnum);
   
   //Calculating Average Age of PG Students
   cout << "\n-PG-\n";
   avg(pg,pgnum);
    
    return 0;    
}
