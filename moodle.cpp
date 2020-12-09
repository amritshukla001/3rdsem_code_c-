#include<iostream>

using namespace std;

class date {

    int mm,dd,yy;

public:
    void readdate();
    int operator -(date);
    date operator -(int);
};

void date::readdate() {
     
    cout<<"Enter a valid Date(dd/mm/yy): \n";
    char ch='/';
    
    START:
    
    cin>>dd>>ch>>mm>>ch>>yy;
    
    if((mm==2) && (dd>29)) {

        cout<<"Invalid Date!!!\n";
        cout<<"\n Enter Date again:\n";
        goto START;
    }

    if((mm>12)||(dd>31)) {

        cout<<"Invalid Date!!!\n";
        cout<<"\n Enter Date again:\n";
        goto START;
    }

    if((mm==4||mm==6||mm==9||mm==11) && (dd>30)) {
        
        cout<<"Invalid Date!!!\n";
        cout<<"\n Enter Date again:\n";
        goto START;
    }

    if((yy%4)!=0 && (mm==2) && (dd>28)) {

        cout<<"Invalid Date!!!\n";
        cout<<"\n Enter Date again:\n";
        goto START;
    }
}

// (-) operator overloaded function to find the no. of days between two dates
int date::operator -(date d2) {

    int i,nod1,nod2,nody,lc,no_of_days;
    nod1=nod2=lc=0;

    for(i=1;i<mm;i++) {
    
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            nod1+=31;
    
        else if(i==2)
            nod1+=28;
        else
            nod1+=30;
    }

    nod1+=dd;

    for(i=1;i<d2.mm;i++) {
        
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            nod2+=31;
        else if(i==2)
            nod2+=28;
        else
            nod2+=30;
    }

    nod2+=d2.dd;
    
    nody=(yy-d2.yy)*365;

    for(i=d2.yy;i<yy;i++)
        if((i%4)==0)
            lc++;

    int y4=yy-d2.yy;

    while(y4>400) {
        lc++;
        y4-=400;
    }

    if((mm>2) && (yy%4)==0)
        lc++;
    if((d2.mm>2) && (d2.yy%4)==0)
        lc--;

    no_of_days=nody+nod1-nod2+lc;
    
    if(no_of_days>0) {

        cout<<"\nTotal number of Days between these Dates is= ";
        return(no_of_days);
    }
    
    else
        return(no_of_days);
}

/* operator(+) overloaded function to find the new date when no. of days are substracted to a
particular date.*/

date date::operator -(int nd) {
 
    date dd3;

    while(nd>365) {
    
        yy--;
        nd-=365;
    }

    while(nd>30) {
        
        if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12) {
            
            nd-=31;
            mm--;
        }
 
        else if(mm==2) {
            nd-=28;
            mm--;
        }
        
        else {
            nd-=30;
            mm--;
        }

        if(mm>12) {
            yy--;
            mm=1;
        }
    }

    dd=dd-nd;
 
    if(dd>30) {
        
        if(mm==4||mm==6||mm==9||mm==11) {
            
            mm--;
            dd-=30;
        }
 
        else if(mm==2) {
            
            mm--;
            dd-=28;
        }
        
        else if(dd>31) {
            
            mm--;
            dd-=31;
        }
        
        if(mm>12) {
            
            yy--;
            mm=1;
        }
    }

    dd3.mm=mm;
    dd3.dd=dd;
    dd3.yy=yy;
    cout<<"new date is:";
    cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
    return(dd3);
}

//main function
int main() {

    int res,num;
    date dd1,dd2;

    cout << "Note: First Date shoud be greater that Second Date to perform (-) operator overloading \n\n";
    dd1.readdate();
    dd2.readdate();
    
    res=dd1-dd2;
    
    if(res>=0) 
        cout<<res;
    
    else {
        cout<<"\n First date should be greater than the Second date\n";
    }

    cout<<"\n\n\n Enter the no. of days to be substracted from the FIRST date:";
    cin>>num;
    
    dd2=dd1-num;
 
    return 0;
}
