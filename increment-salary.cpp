#include<iostream>
using namespace std;
int main(){
    int rating,years;
    float Salary,newSalary1,newSalary2,totalSalary;
    cout<<"Enter the Salary : ";
    cin>>Salary;
    cout<<"Enter the Rating : ";
    cin>>rating;
    cout<<"Enter the years: ";
    cin>>years;
    if(rating==5){
        if(years>5){
            newSalary1=(Salary*20)/100;
            newSalary2=(Salary*5)/100;
            totalSalary=Salary+newSalary1+newSalary2;
            cout<<totalSalary;
        }
        else{
            newSalary1=(Salary*20)/100;
            totalSalary=Salary+newSalary1;
            cout<<totalSalary;
        }

    }
    else if(rating==4){
        if(years>5){
            newSalary1=(Salary*15)/100;
            newSalary2=(Salary*5)/100;
            totalSalary=Salary+newSalary1+newSalary2;
            cout<<totalSalary;
        }
        else{
            newSalary1=(Salary*15)/100;
            totalSalary=Salary+newSalary1;
            cout<<totalSalary;
        }

    }
    else if(rating==3){
        if(years>5){
            newSalary1=(Salary*10)/100;
            newSalary2=(Salary*5)/100;
            totalSalary=Salary+newSalary1+newSalary2;
            cout<<totalSalary;
        }
        else{
            newSalary1=(Salary*10)/100;
            totalSalary=Salary+newSalary1;
            cout<<totalSalary;
        }

    }
    else if(rating==2){
        if(years>5){
            newSalary1=(Salary*5)/100;
            newSalary2=(Salary*5)/100;
            totalSalary=Salary+newSalary1+newSalary2;
            cout<<totalSalary;
        }
        else{
            newSalary1=(Salary*5)/100;
            totalSalary=Salary+newSalary1;
            cout<<totalSalary;
        }

    }
    else{
        if(years>5){
            newSalary1=(Salary*0)/100;
            newSalary2=(Salary*5)/100;
            totalSalary=Salary+newSalary1+newSalary2;
            cout<<totalSalary;
        }
        else{
            newSalary1=(Salary*0)/100;
            totalSalary=Salary+newSalary1;
            cout<<totalSalary;
        }
    }
}