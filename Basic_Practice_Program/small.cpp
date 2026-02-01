#include<iostream>
using namespace std;
int main(){
    int number,Digit,small;
    cout<<"Enter number";
    cin>>number;

    Digit=number%10;
    small=Digit;
    
    number=number/10;
    Digit=number%10;
    if(small>Digit){
        small=Digit;
    }

    number=number/10;
    Digit=number%10;
    if(small>Digit){
        small=Digit;
    }

    number=number/10;
    Digit=number%10;
    if(small>Digit){
        small=Digit;
    }

    cout<<"the smallest digit is "<<small;
}
