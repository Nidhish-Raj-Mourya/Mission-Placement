#include<iostream>
using namespace std;
int main(){
    float unitConsumed,rate,totalBill;
    cout<<"Enter Units consumed \n";
    cin>>unitConsumed;
    cout<<"Enter Rate \n";
    cin>>rate;
    totalBill=unitConsumed*rate;
    cout<<"The Total Bill is "<<totalBill;
    return 0;
}