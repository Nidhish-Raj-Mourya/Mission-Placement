#include<iostream>
using namespace std;
int main(){
    int firstSide,secondSide,thirdSide;
    cout<<"Enter the firstSide ";
    cin>>firstSide;
    cout<<"Enter the secondSide ";
    cin>>secondSide;
    cout<<"Enter the thirdSide ";
    cin>>thirdSide;

    if(firstSide==secondSide and secondSide==thirdSide){
        cout<<"Equilateral ";
    }
    else if(firstSide==secondSide or secondSide==thirdSide or firstSide==thirdSide){
        cout<<"Isosceles ";
    }
    else{
        cout<<"Scalene ";
    }
}