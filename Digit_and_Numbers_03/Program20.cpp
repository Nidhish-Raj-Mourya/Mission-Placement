#include<iostream>
using namespace std;
int duckNumber(int number)
{
 int firstDigit=number/1000;
 number=number%1000;   
 int secondDigit=number/100;
 number=number%100;  
 int thirdDigit=number/10;
 int fourthDigit=number%10;
 if(secondDigit==0||thirdDigit==0|fourthDigit==0){
    cout<<"Duck Number";
 }
 else{
    cout<<"Not Duck Number";
 }
 return 0;
}
int main(){
    int number,count;
    cout<<"Enter Number";
    cin>>number;
    duckNumber(number);
}