#include<iostream>
using namespace std;
int main(){
    int angle1,angle2,angle3;
    cout<<"Enter angle 1";
    cin>>angle1;
    cout<<"Enter angle 2";
    cin>>angle2;
    cout<<"Enter angle 3";
    cin>>angle3;
    if(angle1==angle2&&angle2==angle3&&angle3==angle1){
        cout<<"it is an equilateral triangle";
    }
    else if(angle1==angle2||angle2==angle3||angle3==angle2){
        cout<<"it is an isoceles triangle";
    }
    else{
        cout<<"it is an scalene triangle";
    }
    return 0;
}