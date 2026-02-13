#include<iostream>
using namespace std;

int removeSpecificDigit(int number, int digit){
    int endDigit;
    int result=0,place=1;
    for(int i=1;number!=0;i++){
        endDigit=number%10;
        number=number/10;
        if(endDigit!=digit){
            result=result+endDigit*place;
            place=place*10;
        }
    }
    cout<<result;
    return 0;
}

int main(){

    int number,digit;

    cout<<"Enter the number : ";
    cin>>number;

    cout<<"Enter the digit : ";
    cin>>digit;

    removeSpecificDigit(number,digit);
}