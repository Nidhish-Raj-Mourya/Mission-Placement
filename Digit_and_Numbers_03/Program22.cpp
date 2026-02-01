#include<iostream>
using namespace std;
int bouncyNumber(int number){
    int firstDigit=number/100;   
    number=number%100;  
   int secondDigit=number/10;
    int thirdDigit=number%10;
 if((firstDigit<secondDigit && secondDigit<thirdDigit)||(firstDigit>secondDigit && secondDigit>thirdDigit))
 {
    cout<<"Not Bouncy";
}
else {cout<<"Bouncy";}}
int main(){
    int number;
    cout<<"enter the number ";
    cin>>number;
    bouncyNumber(number);

}