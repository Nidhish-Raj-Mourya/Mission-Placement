#include<iostream>
using namespace std;
int harshadChecker(int number){
 int firstDigit=number/100;   
 int secondDigit=number%100;  
 secondDigit=secondDigit/10;
 int thirdDigit=(number%100)%10;
 int sum=firstDigit+secondDigit+thirdDigit;
 if(number%sum==0)
 { cout<<"Harshad Number";
}
 else{
    cout<<"Not Harshad Number";
 }
 return 0;
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    harshadChecker(number);
}