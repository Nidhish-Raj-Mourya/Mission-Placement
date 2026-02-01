#include<iostream>
using namespace std;
int addition(int number1,int number2){
    int result=number1+number2;
    return result;
}
int subtraction(int number1,int number2){
    int result=number1-number2;
    return result;
}
int main(){
    int firstNumber,secondNumber;
    cout<<"Enter the number : ";
    cin>>firstNumber;
    cout<<"Enter the number : ";
    cin>>secondNumber;
    int result1=addition(firstNumber,secondNumber);
    cout<<result1<<endl;
    int result2=subtraction(firstNumber,secondNumber);
    cout<<result2<<endl;
}