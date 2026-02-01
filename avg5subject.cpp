#include<iostream>
using namespace std;
int main(){
    int sum,average,firstNumber,secondNumber,thirdNumber,fourthNumber,fifthNumber;
    cout<<"Enter the value : ";
    cin>>firstNumber;
    cout<<"Enter the value : ";
    cin>>secondNumber;
    cout<<"Enter the value : ";
    cin>>thirdNumber;
    cout<<"Enter the value : ";
    cin>>fourthNumber;
    cout<<"Enter the value : ";
    cin>>fifthNumber;

    sum=firstNumber+secondNumber+thirdNumber+fourthNumber+fifthNumber;
    cout<<"Sum of All subjects : "<<sum<<endl;

    average=sum/5;
    cout<<"Average of All sujects : "<<average;
}