#include<iostream>
using namespace std;

int productOfDigit(int number){
    int original=number;
    int product=1;

    if(number<=0 || number>=1000000000){
        cout<<"You are cross the  number limit";
        return 0;
    }

    while(original!=0){
        int digit=original%10;
        original=original/10;

        product=product*digit;
    }
    cout<<product;

    return 0;
}

int main(){
    int number;


    cout<<"Enter number:";
    cin>>number;

    productOfDigit(number);
}