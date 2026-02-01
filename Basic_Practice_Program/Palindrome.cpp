#include<iostream>
using namespace std;
int main(){
    int number,reverse,firstDigit,secondDigit,thirdDigit;
    cout<<"Enter number ";
    cin>>number;
    firstDigit=number/100;
    secondDigit=number%100;
    secondDigit=secondDigit/10;
    thirdDigit=number%10;
    reverse=thirdDigit*100+secondDigit*10+firstDigit;
    if(number==reverse)
    cout<<"it is palindrome";
    else
    cout<<"it is not palindrome";
    return 0;
}