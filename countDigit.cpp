#include<iostream>
using namespace std;

void countDigit(int number,int specificDigit){
    int digit=0;
    int count=0;

    while(number!=0){
        digit=number%10;
        number=number/10;

        if(digit==specificDigit){
            count++;
        }

    }

    cout<<"Digit appear in the number is:"<<count<<" time";

}

int main(){
    int number=0;
    int digit=0;

    cout<<"enter number:";
    cin>>number;
    cout<<"enter digit:";
    cin>>digit;

    countDigit(number,digit);

}