#include<iostream>
using namespace std;
int main(){
    float principal,rate,time,simpleInterest,totalAmount;
    cout<<"Enter value : ";
    cin>>principal;
    cout<<"Enter value : ";
    cin>>rate;
    cout<<"Enter value : ";
    cin>>time;

    simpleInterest=(principal*rate*time)/100;
    cout<<"Simple Interest : "<<simpleInterest<<endl;

    totalAmount=simpleInterest+principal;
    cout<<"Total Amount : "<<totalAmount<<endl;
}