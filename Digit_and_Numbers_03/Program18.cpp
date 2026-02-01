#include<iostream>
using namespace std;
int ascendingOrder(int number)
{
 int firstDigit=number/100;   
 number=number%100;  
 int secondDigit=number/10;
 int thirdDigit=number%10;
 if(firstDigit<secondDigit&&secondDigit<thirdDigit){
    cout<<"they are in strict ascending order ";
 }
 else if(firstDigit>secondDigit && secondDigit>thirdDigit){
    cout<<"they are in strict descending order";
 }
 else{
    cout<<"they are in random order";
 }
}

int main(){
    int number;
    cout<<"enter number ";
    cin>>number;
    ascendingOrder(number);
}