#include<iostream>
using namespace std;
int main(){
    float principal,rate,time;
    float simpleInterest,amount;
    cout<<"Enter principal \n";
    cin>>principal;
    cout<<"Enter rate \n";
    cin>>rate;
      cout<<"Enter time \n";
    cin>>time;
    simpleInterest=(principal*rate*time)/100.0;
    amount=principal+simpleInterest;
    cout<<"The Simple Interest \n"<<simpleInterest<<"\n";
    cout<<"The Amount is \n"<<amount;
    return 0;
}