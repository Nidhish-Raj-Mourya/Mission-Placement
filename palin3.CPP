#include<iostream>
using namespace std;
int main(){
    int number,digit1,digit2,digit3,reverse;
    cout<<"The number is: ";
    cin>>number;
    digit1 = number%10;
    digit2 = number/10;
    digit2 = digit2%10;
    digit3 = number/100;
    reverse = (digit1*100)+(digit2*10)+digit3;
    if(number==reverse)
    {
      cout<<"Number is palindrome number.";
    }
    else{
        cout<<"Number is not palindrome number.";
    }

    return 0;
}