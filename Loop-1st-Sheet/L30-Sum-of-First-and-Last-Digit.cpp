#include<iostream>
using namespace std;

int firstDigit(int number){
    int firstDigit;
    for(int i=1;number!=0;i++){
        firstDigit=number%10;
        number=number/10;
    }
    
    return firstDigit;
}

int lastDigit(int number){

    int lastDigit;
    lastDigit=number%10;
    return lastDigit;
}

int sum(int number){
    int sum;
    sum = firstDigit(number)+lastDigit(number);
    cout<<sum;
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    sum(number);
}