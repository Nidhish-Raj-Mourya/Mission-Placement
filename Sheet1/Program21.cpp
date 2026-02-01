#include<iostream>
using namespace std;
int largestDigit(int number){
   int largeDigit=number%10;
   int digit=0;
   while(number!=0){
    digit=number%10;
    if(largeDigit<=digit){
        largeDigit=digit;
    }
    number=number/10;
   }
   cout<<"The largest Digit is "<<largeDigit;
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    largestDigit(number);
    return 0;
}