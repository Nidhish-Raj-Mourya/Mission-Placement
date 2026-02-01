#include<iostream>
using namespace std;
int SumOfDigit(int number)
{
    int firstDigit=number%10;
    int lastDigit;
    while(number!=0){
    lastDigit=number%10;
    number=number/10;
    }
    cout<<"last digit is "<<lastDigit<<" and first digit is "<<firstDigit<<" and their sum is "<<firstDigit+lastDigit;
}
int main(){
    int number;
    cout<<"enter the number ";
    cin>>number;
    SumOfDigit(number);
    return 0;
}