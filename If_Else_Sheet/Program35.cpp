#include<iostream>
using namespace std;
int main(){
    int age,income,creditScore;
    cout<<"Enter age";
    cin>>age;
    cout<<"Enter income";
    cin>>income;
    cout<<"Enter credit score";
    cin>>creditScore;
    if(21<=age&&age<=60)
    {
        if(income>25000)
        {
            if(creditScore>700)
            {
                cout<<"Eligible";
            }
            else
            {
                cout<<"Credit Score Condition not met";
            }
        }
        else
        {
            cout<<"income less than 25000";
        }
    }    
    else
    {
        cout<<"age criteria not met";
    }       
}