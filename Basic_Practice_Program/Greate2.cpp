#include<iostream>
using namespace std;
int main(){
    int number,firstDigit,secondDigit,thirdDigit,fourthDigit,Greatest;
    cout<<"Enter Number";
    cin>>number;
    firstDigit=number/1000;
    number=number%1000;
    secondDigit=number/100;
    number=number%100;
    thirdDigit=number/10;
    fourthDigit=number%10;
    if(firstDigit>secondDigit && firstDigit>thirdDigit && firstDigit>fourthDigit)
    {
        cout<<"the greatest is "<<firstDigit;
    }
    else if(secondDigit>thirdDigit && secondDigit>fourthDigit)
    {
        cout<<"the greatest is "<<secondDigit;
    }
    else if(thirdDigit>fourthDigit)
    {
        cout<<"the greatest is "<<thirdDigit;
    }
    else
    {
        cout<<"The greatest is "<<fourthDigit;
    }
}