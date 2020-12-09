#include <iostream>

using namespace std;

class STUDENT
{
    protected:
        long int USN;
        char NAME[30];
        int age;
};

class UGSTUDENT : public STUDENT
{
    int semester;
    float fees;
    float stipend;
    
    public:
        void read_data()
        {
            cout<<"\nEnter USN: ";
            cin>>USN;
            cout<<"Enter Name: ";
            cin.ignore();
            cin.getline(NAME,30);
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter Semester No.: ";
            cin>>semester;
            cout<<"Enter Fees: ";
            cin>>fees;
            cout<<"Enter Stipend: ";
            cin>>stipend;
        }
        
        
    	int getsem()
    	{
    		return(semester);
    	}
    
    	
    	int getage()
    	{
    		return(age);
    	}
};


class PGSTUDENT : public STUDENT
{
    int semester;
    float fees;
    float stipend;
    
    public:
        void read_data()
        {   
            cout<<"\nEnter USN: ";
            cin>>USN;
            cout<<"Enter Name: ";
            cin.ignore();
            cin.getline(NAME,30);
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter Semester No.: ";
            cin>>semester;
            cout<<"Enter Fees: ";
            cin>>fees;
            cout<<"Enter Stipend: ";
            cin>>stipend;
        }
        
    
    	int getsem()
    	{
    		return(semester);
    	}
    
    	
    	int getage()
    	{
    		return(age);
    	}
        
        
};


int main()
{
    UGSTUDENT ug[2];
    PGSTUDENT pg[2];
    
    int age, sem, agesum=0, flag, count=0, i, j;
    float average_age;
    
    cout<<"\n-------------Enter Details Of Under Graduate Students--------------\n";
    
    for(i=0; i<2; i++)
    {
        ug[i].read_data();
    }    
    
    cout<<"\n-------------Enter Details Of Post Graduate Students--------------\n";
    
    for(i=0; i<2; i++)
    {
        pg[i].read_data();
    }
    
    cout<<"\n";
    cout<<"------Semester Wise Average Age For All UG And PG Students------\n\n";
    
    for(i=1; i<=8; i++ )
	{
		flag=0,count=0,agesum=0, average_age=0;
		
		for(j=0; j<2; j++ )
		{
			sem=ug[j].getsem();
			age=ug[j].getage();

			if( i==sem )
			{
				agesum+=age;
				count++;
				flag=1;
			}
		}
	    
	    average_age=agesum/count;
	    
	    if(flag==1)
	    cout<<"UG SEM "<<i<<"\t"<<average_age<<endl;
    }

    
    
	
	for(i=1; i<=8; i++ )
	{
		flag=0, agesum=0, count=0, average_age=0;
		
		for(j=0; j<2; j++ )
		{
			sem=pg[j].getsem();
			age=pg[j].getage();

			if( i==sem )
			{
				agesum+=age;
				count++;
				flag=1;
			}
		}
	    
	    average_age=agesum/count;
	    
	    if(flag==1)
	    cout<<"PG SEM "<<i<<"\t"<<average_age<<endl;
    }
    
return 0;    
    
}
