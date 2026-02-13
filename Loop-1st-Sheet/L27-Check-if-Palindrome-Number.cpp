#include<iostream>
using namespace std;

int palindromeNumber(int number){

    int lastDigit,reverse=0,temp;
    temp=number;
    for(int i=1;temp!=0;i++){
        lastDigit=temp%10;
        temp=temp/10;
        reverse=(reverse*10)+lastDigit;
    }
    if(number==reverse){
        cout<<"It is Palindrome : "<<reverse;
    }
    else{
        cout<<"It is not Palindrome : "<<reverse;
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    palindromeNumber(number);
}