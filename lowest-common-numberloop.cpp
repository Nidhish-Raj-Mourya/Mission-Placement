#include<iostream>
using namespace std;

int lcm(int num1,int num2){
   int number1 = num1;
   int number2 = num2;
   int i=2;
    int factor=1;
    while(i<=num1&&i<=num2){
        if(num1%i==0&&num2%i==0){
           factor *= i;
           num1 = num1/i;
           num2 = num2/i;
        }
        i++;
    }
    int result = (number1*number2)/factor;
    cout<<"The lcm is: "<<result;


    return 0;
}

int main(){
    int number1,number2;

    cout<<"Enter the number1: ";
    cin>>number1;

    cout<<"Entyer the number2: ";
    cin>>number2;

    lcm(number1,number2);
}