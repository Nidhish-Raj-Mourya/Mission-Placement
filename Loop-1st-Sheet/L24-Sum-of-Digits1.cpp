#include<iostream>
using namespace std;

int sumDigit(int number){

    int lastDigit,sumOfDigit=0;
    for(int i=1;number!=0;i++){
        lastDigit=number%10;
        number=number/10;
        sumOfDigit=sumOfDigit+lastDigit;
    }
    cout<<sumOfDigit;
    return 0;

}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    sumDigit(number);

}