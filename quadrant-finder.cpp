#include<iostream>
using namespace std;
int main(){
    int xAxis,yAxis;
    cout<<"Enter the X axis : ";
    cin>>xAxis;
    cout<<"Enter the Y axis : ";
    cin>>yAxis;

    if(xAxis>0 and yAxis>0){
        cout<<"Lies on first Quadrant ";
    }
    else if(xAxis<0 and yAxis>0){
        cout<<"Lies on second Quadrant ";
    }
    else if(xAxis<0 and yAxis<0){
        cout<<"Lies on third Quadrant ";
    }
    else if(xAxis>0 and yAxis<0){
        cout<<"Lies on fourth Quadrant ";
    }
    else if(xAxis=0){
        cout<<"Lies on Y axis ";
    }
    else if(yAxis=0){
        cout<<"Lies on X axis ";
    }
}