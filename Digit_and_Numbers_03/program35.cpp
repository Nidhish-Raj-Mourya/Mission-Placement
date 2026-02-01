#include<iostream>
using namespace std;
int dariumNumber(int number){
 int firstDigit=number/100;
 int secondDigit=(number%100)/10;
 int thirdDigit=(number%100)%10;
 int sum=firstDigit+secondDigit*secondDigit+thirdDigit*thirdDigit*thirdDigit;
 if(number==sum){
    cout<<"it is a darium number ";
 }
 else{
    cout<<"it is not a darium number";
 }
}
int main(){
    int number;
    cout<<"emter number";
    cin>>number;
    dariumNumber(number);
}