#include<iostream>
using namespace std;
int main(){
    int firstNumber,secondNumber;
    cout<<"Enter the no. : ";
    cin>>firstNumber;
    cout<<"Enter the no. : ";
    cin>>secondNumber;
    if(firstNumber>secondNumber){
        cout<<"First number is greater : "<<firstNumber;
    }
    else if(secondNumber>firstNumber){
        cout<<"Second number is greater : "<<secondNumber;
    }
    else{
        cout<<"Both are Equal : "<<firstNumber<<" "<<secondNumber;
    }
} 