

//programme takes compile time input
#include <iostream>
#include <string.h>

using namespace std;

class student {

protected:
		string usn_;
		string name_;
		int age_;
public:
	student(string usn,string name,int age) {
 		usn_=usn;
		name_=name;
		age_=age;
	}
	
	/*void print() {
		cout << usn_ << "\t" << name_ << "\t" << age_ << endl;
	}*/

	/*~student() {
		cout << "object destruted" << endl;
	}*/
	
};

class ugstudent: public student {

protected:
		int sem_;
		int fees_;
		int stp_;
public:
		ugstudent(string usn,string name,int age,int sem,int fees,int stp): student(usn,name,age) {
			sem_=sem;
			fees_=fees;
			stp_=stp;
		}

		/*void print() {
			cout << usn_ << "\t" << name_ << "\t" << age_ << "\t" << sem_ << "\t" << fees_ << "\t" << stp_ << endl;
		}*/
		
		/*~ugstudent() {
			cout << "object destructed1" << endl;
		} */

		friend void avg(ugstudent* ug) {

			int sem,i;
			
			for(sem=1;sem<8;sem++) {
				
				int sum=0,count=0,found=0;
				//float avg=0;
				
				for(i=1;i<=5;i++) {
					if(ug[i].sem_==sem) {
						sum+=ug[i].age_;
						found=1;
						count++;
					}
				}

				if(found==1) {
					//avg=(float)sum/(float)count;
					cout << "\nsem: " << sem << "\navg age: " << (float)sum/(float)count << endl;
				}
			}
		} 
};

class pgstudent: public student {

protected:
		int sem_;
		int fees_;
		int stp_;
public:
		pgstudent(string usn,string name,int age,int sem,int fees,int stp): student(usn,name,age) {
			sem_=sem;
			fees_=fees;
			stp_=stp;
		}

		/*void print() {
			cout << usn_ << "\t" << name_ << "\t" << age_ << "\t" << sem_ << "\t" << fees_ << "\t" << stp_ << endl;
		}*/
		
		/*~pgstudent() {
			cout << "object destructed2" << endl;
		}*/

		 friend void avg(pgstudent* pg) {

			int sem,i;
			
			for(sem=1;sem<8;sem++) {
				
				float sum=0,count=0,found=0;
				float avg=0;
				
				for(i=1;i<=5;i++) {
					if(pg[i].sem_==sem) {
						sum+=pg[i].age_;
						found=1;
						count++;
					}
				}

				if(found==1) {
					//avg=sum/count;
					cout << "\nsem: " << sem << "\navg age: " << avg << endl;
				}
			}
		} 
};

main() {

	float a=8;
	float b=3;
	cout << a/b;

	student s = student("amrit shukla","shukla amrit",28);
	//s.print();
	ugstudent ug1("201900041","Amrit Shukla",19,3,100000,8000);
	ugstudent ug2("201900022","Syead",20,3,90000,8000);
	ugstudent ug3("201900093","Shashi",19,2,80000,700);
	ugstudent ug4("201900014","Abhinav",20,2,50000,80);
	ugstudent ug5("201900025","Sneha",18,5,100000,6000);
	//ug2.print();
	pgstudent pg1("amrit shukla","shukla amrit",9,1,90,80);
	pgstudent pg2("amrit shukla","shukla amrit",9,1,90,80);
	pgstudent pg3("amrit shukla","shukla amrit",90,2,90,80);
	pgstudent pg4("amrit shukla","shukla amrit",90,2,90,80);
	pgstudent pg5("amrit shukla","shukla amrit",90,2,90,80);
	//pg2.print();
	ugstudent ug[]={ug1,ug2,ug3,ug4,ug5};
	cout << "\nAverage age of ug student:\n";
	avg(ug);
	pgstudent pg[]={pg1,pg2,pg3,pg4,pg5};
	cout << "\nAverage age of pg student:\n";
 	avg(pg);
	//cout << "1" << endl;
	//return 0;
}
