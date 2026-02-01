#include<iostream>
using namespace std;
int main(){
    int number,Digit,greatest;
    cout<<"Enter number";
    cin>>number;

    Digit=number%10;
    greatest=Digit;
    
    number=number/10;
    Digit=number%10;
    if(greatest<Digit){
        greatest=Digit;
    }

    number=number/10;
    Digit=number%10;
    if(greatest<Digit){
        greatest=Digit;
    }

    number=number/10;
    Digit=number%10;
    if(greatest<Digit){
        greatest=Digit;
    }

    cout<<"the largest digit is "<<greatest;
}
