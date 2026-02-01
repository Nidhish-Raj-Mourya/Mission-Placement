#include<iostream>
using namespace std;
int spyChecker(int number){
 int firstDigit=number/100;   
 int secondDigit=number%100;  
 secondDigit=secondDigit/10;
 int thirdDigit=(number%100)%10;
 int sum=firstDigit+secondDigit+thirdDigit;
 int product=firstDigit*secondDigit*thirdDigit;
 if(sum==product)
 {cout<<"Spy Number";}
 else{
    cout<<"Not Spy Number";
 }
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    spyChecker(number);
}