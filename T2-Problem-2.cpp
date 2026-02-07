#include<iostream>
using namespace std;

int LengthOfNumber(int number){
    int length=0,lastDigit;
    for(;number!=0;){
        lastDigit=number%10;
        length++;
        number=number/10;
    }
    return length;
}

int power(int count,int digit){
    int result=1;
    for(int i=1;i<=count;i++){
        result=result*digit;
    }
    return result;
}

int armstrongNumber(int number){
    int count,sum=0,digit,originalNumber;
    count=LengthOfNumber(number);
    originalNumber=number;
    for(int i=1;number!=0;i++){
        digit=number%10;
        sum=sum+power(count,digit);
        number=number/10;
    }
    if(originalNumber==sum){
        cout<<"Armstrong Number : "<<sum<<" "<<originalNumber;
    }
    else{
        cout<<"Not Armstrong Number : "<<sum<<" "<<originalNumber;
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    armstrongNumber(number);
}