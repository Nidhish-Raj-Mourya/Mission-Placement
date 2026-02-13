#include<iostream>
using namespace std;

int checkSpecificNumber(int number,int digit){
    
    int endDigit;
    for(int i=1;number!=0;i++){
        endDigit=number%10;
        number=number/10;
        if(endDigit==digit){
            cout<<"It does ";
            break;
        }
        else{
            cout<<"It does Not ";
            break;
        }
    }
    return 0;   
}

int main(){
    int number,digit;

    cout<<"Enter the number : ";
    cin>>number;

    cout<<"Enter the digit : ";
    cin>>digit;

    checkSpecificNumber(number,digit);
}