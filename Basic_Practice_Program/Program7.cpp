#include<iostream>
using namespace std;
int main(){
    float principal,rate,time;
    float simpleInterest;
    cout<<"Enter principal \n";
    cin>>principal;
    cout<<"Enter rate \n";
    cin>>rate;
      cout<<"Enter time \n";
    cin>>time;
    simpleInterest=(principal*rate*time)/100.0;
    cout<<"The Simple Interest \n"<<simpleInterest;
    return 0;
}