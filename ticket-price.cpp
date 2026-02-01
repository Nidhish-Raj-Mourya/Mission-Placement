#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    if(age>=0 and age<=12){
        cout<<"Ticket price would be 100 ";
    }
    else if(age>=13 and age<=17){
        cout<<"Ticket price would be 150 ";
    }
    else if(age>=18 and age<=59){
        cout<<"Ticket price would be 200 ";
    }
    else {
        cout<<"Ticket price would be 120 ";
    }
}