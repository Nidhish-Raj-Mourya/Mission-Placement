#include<iostream>
using namespace std;
int main(){
    int dividend,divisor,quotient,reminder;
    cout<<"Enter the dividend : ";
    cin>>dividend;
    cout<<"Enter the divisor : ";
    cin>>divisor;

    quotient=dividend/divisor;
    cout<<quotient<<endl;

    reminder=dividend%divisor;
    cout<<reminder<<endl;

}