#include<iostream>
using namespace std;
int main(){
    int units;
    cout<<"Enter the units : ";
    cin>>units;
    if(units>=0 and units<=100){
        cout<<"electricity_bill is : "<<units*5;
    }
    else if(units>=101 and units<=200){
        cout<<"electricity_bill is : "<<units*7;
    }
    else if(units>=201 and units<=300){
         cout<<"electricity_bill is : "<<units*10;
    }
    else{
         cout<<"electricity_bill is : "<<units*15;
    }
}