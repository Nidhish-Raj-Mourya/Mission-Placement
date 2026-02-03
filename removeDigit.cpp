#include<iostream>
using namespace std;

int removeDigit(int number,int digit){
    int place=1;
    int singleDigit=1;
    int newNumber=0;
    
    while(number!=0){
       singleDigit=number%10;
       
       if(singleDigit!=digit){
            newNumber=newNumber+(singleDigit*place);
            place=place*10;
       }

       number=number/10;
    }

    return newNumber;
}

int main(){
    int number=0;
    int digit=0;

    cout<<"enter number:";
    cin>>number;
    cout<<"enter remove digit:";
    cin>>digit;

    cout<<"New number is:"<<removeDigit(number,digit);
}