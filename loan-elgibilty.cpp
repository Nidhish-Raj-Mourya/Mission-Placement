#include<iostream>
using namespace std;
int main(){
    int age,salary,creditScore;
    cout<<"Enter the age : ";
    cin>>age;
    cout<<"Enter the salary : ";
    cin>>salary;
    cout<<"Enter the credit score : ";
    cin>>creditScore;
    if(age>=21 and age<=60 and salary>25000 and creditScore>700){
        cout<<"Eligible for Loan ";
    }
    else{
        if(age<21){
            cout<<"AGE FAILED ";
        }
        else if(salary<25000){
            cout<<"SALARY FAILED ";
        }
        else{
            cout<<"CREDITSCORE FAILED ";
        }
    }
}