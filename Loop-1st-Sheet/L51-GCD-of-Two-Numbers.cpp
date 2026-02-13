#include<iostream>
using namespace std;

int GCDOfTwoNumber(int number1,int number2){

    int product=1;
    for(int i=1;i<=number1 and i<=number2;i++){
        if(number1%i==0 and number2%i==0){
            product=product*i;
            number1=number1/i;
            number2=number2/i;
        }
    }
    cout<<product;
    return 0;
}

int main(){
    
    int numberOne,numberTwo;

    cout<<"Enter the number : ";
    cin>>numberOne;

    cout<<"Enter the number : ";
    cin>>numberTwo;

    GCDOfTwoNumber(numberOne,numberTwo);
}