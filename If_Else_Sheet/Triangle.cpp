#include<iostream>
using namespace std;
int main(){
    int angle1,angle2,angle3;
    cout<<"Enter angle 1 of triangle";
    cin>>angle1;
    cout<<"Enter angle 2 of triangle";
    cin>>angle2;
    cout<<"Enter angle 3 of triangle";
    cin>>angle3;
    if(angle1+angle2+angle3==180){
        cout<<"it is triangle";
    }
    else
    {
        cout<<"it is not triangle";
    }
}