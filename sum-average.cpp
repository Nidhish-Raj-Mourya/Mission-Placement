#include<iostream>
using namespace std;
int main(){
    int sum,average,firstNumber,secondNumber,thirdNumber;
    cout<<"Enter the value : ";
    cin>>firstNumber;
    cout<<"Enter the value : ";
    cin>>secondNumber;
    cout<<"Enter the value : ";
    cin>>thirdNumber;

    sum=firstNumber+secondNumber+thirdNumber;
    cout<<sum<<endl;

    average=sum/3;
    cout<<average;
}