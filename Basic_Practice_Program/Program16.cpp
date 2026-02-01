#include<iostream>
using namespace std;
int main(){
    int number1,number2,temp;
    cout<<"Enter number 1 \n";
    cin>>number1;
    cout<<"Enter number 2 \n";
    cin>>number2;
    cout<<"Before swapping Number 1 \n"<<number1<<" Number 2 \n"<<number2<<"\n";
    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;
    cout<<"After swapping \n Number 1 \n"<<number1<<"\nNumber 2 \n"<<number2;
    return 0;
}