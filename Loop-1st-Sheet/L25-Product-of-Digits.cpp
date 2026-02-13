#include<iostream>
using namespace std;

int productDigit(int number){

    int lastDigit,productOfDigit=1;
    for(int i=1;number!=0;i++){
        lastDigit=number%10;
        number=number/10;
        productOfDigit=productOfDigit*lastDigit;
    }
    cout<<productOfDigit;
    return 0;

}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    productDigit(number);

}