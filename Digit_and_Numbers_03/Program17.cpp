#include<iostream>
using namespace std;
int evenDigit(int number)
{
 int count=0;

 int firstDigit=number/1000;
 number=number%1000;   
 int secondDigit=number/100;
 number=number%100;  
 int thirdDigit=number/10;
 int fourthDigit=number%10;

 if(firstDigit%2==0)
 {
    count++;
 }
 if(secondDigit%2==0)
 {
    count++;
 }
 if(thirdDigit%2==0)
 {
    count++;
 }
 if(fourthDigit%2==0)
 {
    count++;
 }
 return count;
}
int main(){
    int number,count;
    cout<<"Enter Number";
    cin>>number;
    count=evenDigit(number);
    cout<<"The even digits are "<<count;
}