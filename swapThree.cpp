#include<iostream>
using namespace std;
int main(){
    int firstNumber,secondNumber,thirdNumber,temp;
    cout<<"Enter the value : ";
    cin>>firstNumber;
    cout<<"Enter the value : ";
    cin>>secondNumber;
    cout<<"Enter the value : ";
    cin>>thirdNumber;

    temp=firstNumber;
    firstNumber=secondNumber;
    secondNumber=thirdNumber;
    thirdNumber=temp;

    cout<<firstNumber<<endl;
    cout<<secondNumber<<endl;
    cout<<thirdNumber<<endl;
}