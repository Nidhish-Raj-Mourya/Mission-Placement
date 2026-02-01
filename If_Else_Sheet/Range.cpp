#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number";
    cin>>number;
    if(number>=1&&number<=10){
        cout<<"it lies in range 0-10";
    }
    else if(number>=11&&number<=50){
        cout<<"it lies in range 11-50";
    }
    else if(number>=51&&number<=100){
        cout<<"it lies in range 51-100";
    }
    else if(number>=101&&number<=500){
        cout<<"it lies in range 101-500";
    }
    else if(number>=501&&number<=1000){
        cout<<"it lies in range 501-1000";
    }
    else if(number>1000){
        cout<<"it is above 100";
    }
    return 0;
}