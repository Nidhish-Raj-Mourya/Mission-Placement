#include<iostream>
using namespace std;
int armstrongNumber(int number){
int firstDigit=number/100;
int updatedNumber=number%100;
int secondDigit=updatedNumber/10;
int thirdDigit=updatedNumber%10;
int sum=(firstDigit*firstDigit*firstDigit)+(secondDigit*secondDigit*secondDigit)+(thirdDigit*thirdDigit*thirdDigit);
if(number==sum){
    cout<<"it is an Armstrong Number";
}
else{
    cout<<"it is not an Armstrong Number";
}
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    armstrongNumber(number);

}