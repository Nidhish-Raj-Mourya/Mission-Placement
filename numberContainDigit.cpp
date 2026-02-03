#include<iostream>
using  namespace std;

int numberContainDigit(int number,int specificDigit){
    int digit=0;

    while(number!=0){
        digit=number%10;
        number=number/10;

        if(digit==specificDigit){
            cout<<"Yes number contain this digit:";
            return digit;
        }

    }

      if(digit==specificDigit){
            cout<<"`Yes` number contain this digit:";
            return digit;
        }
        else{
            cout<<"Number `not` contain this digit:";
        }

    return 0;
}

int main(){
    int number,digit;

    cout<<"Enter number:";
    cin>>number;
    cout<<"Enter Digit:";
    cin>>digit;

    numberContainDigit(number,digit);

    return 0;
}