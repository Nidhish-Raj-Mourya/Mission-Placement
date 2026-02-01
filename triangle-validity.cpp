#include<iostream>
using namespace std;
int main(){
    int firstAngle,secondAngle,thirdAngle,sum;
    cout<<"Enter the angle : ";
    cin>>firstAngle;
    cout<<"Enter the angle : ";
    cin>>secondAngle;
    cout<<"Enter the angle : ";
    cin>>thirdAngle;
    sum=firstAngle+secondAngle+thirdAngle;

    if(sum==180){
        cout<<"Valid Triangle ";
    }
    else{
        cout<<"Invalid Triangle ";
    }

}