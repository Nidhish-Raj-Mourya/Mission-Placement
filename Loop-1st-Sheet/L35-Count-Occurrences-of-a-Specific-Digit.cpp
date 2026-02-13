#include<iostream>
using namespace std;

int countSpecificNumber(int number,int digit){
    
    int count=0,endDigit;
    for(int i=1;number!=0;i++){
        endDigit=number%10;
        number=number/10;
        if(endDigit==digit){
            count++;
        }
    }
    cout<<count;
    return 0;   
}

int main(){
    int number,digit;

    cout<<"Enter the number : ";
    cin>>number;

    cout<<"Enter the digit : ";
    cin>>digit;

    countSpecificNumber(number,digit);
}