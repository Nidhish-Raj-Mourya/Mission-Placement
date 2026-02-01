#include<iostream>
using namespace std;
int magicNumber(int number){
    int firstDigit=number/10;
    int secondDigit=number%10;
    int sum=(firstDigit*10+secondDigit)*101;
    cout<<"the magic number is "<<sum;
}
int main(){
 int number;
 cout<<"Enter Number ";
 cin>>number;
 magicNumber(number); 
}