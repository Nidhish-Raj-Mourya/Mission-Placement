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
int multiply(int number1,int number2){
    int result=number1*number2;
    return result;
}
int division(int number1,int number2){
    int result=number1/number2;
    return result;
}
int mod(int number1,int number2){
    int result=number1%number2;
    return result;
}  
int main(){
    int number1,number2,result;
    cout<<"Enter number 1 \n";
    cin>>number1;
    cout<<"Enter number 2 \n";
    cin>>number2;
    result=addition(number1,number2);
    cout<<result<<"\n";
    result=subtraction(number1,number2);
    cout<<result<<"\n";
    result=multiply(number1,number2);  
    cout<<result<<"\n";
    result=division(number1,number2);
    cout<<result<<"\n";
    result=mod(number1,number2);
    cout<<result<<"\n";
    return 0;
}