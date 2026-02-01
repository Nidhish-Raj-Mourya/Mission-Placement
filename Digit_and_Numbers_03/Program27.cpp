#include<iostream>
using namespace std;
int narcisistNumber(int number){
int firstDigit=number/100;
int updatedNumber=number%100;
int secondDigit=updatedNumber/10;
int thirdDigit=updatedNumber%10;
int sum=(firstDigit*firstDigit*firstDigit)+(secondDigit*secondDigit*secondDigit)+(thirdDigit*thirdDigit*thirdDigit);

cout<<"the number is "<<number<<" and its calculated sum of digit is "<<sum<<"\n";
if(number==sum){
    cout<<"They are equal";
}
else{
    cout<<"They are not equal";
}
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    narcisistNumber(number);
}