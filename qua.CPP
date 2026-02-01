#include<iostream>
using namespace std;
int main(){
    int divide,divisor,quotient,reminder;
    cout<<"enter the divide: ";
    cin>>divide;
    cout<<"enter the divisor: ";
    cin>>divisor;
    quotient = divide/divisor;
    cout<<"the quotient: "<<quotient<<endl;
    reminder = divide%divisor;
    cout<<"the reminder: "<<reminder;

    


    return 0;
}