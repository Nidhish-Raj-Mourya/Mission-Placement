#include<iostream>
using namespace std;
int main(){
    int number,reverse,firstDigit,secondDigit;
    cout<<"Enter number ";
    cin>>number;
    firstDigit=number/10;
    secondDigit=number%10;
    reverse=secondDigit*10+firstDigit;
    if(number==reverse)
    cout<<"it is palindrome";
    else
    cout<<"it is not palindrome";
    return 0;
}