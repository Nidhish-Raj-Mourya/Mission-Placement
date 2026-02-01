#include<iostream>
using namespace std;
int main(){
    int units,total;
    cout<<"Enter units";
    cin>>units;
    if(0<=units && units<=100){
        total=units*5;
        cout<<"total bill is "<<total;
    }
    if(101<=units && units<=200){
        total=units*7;
        cout<<"total bill is "<<total;
    }
    if(201<=units && units<=300){
        total=units*10;
        cout<<"total bill is "<<total;
    }
    if(units>300){
        total=units*15;
        cout<<"total bill is "<<total;
    }
}