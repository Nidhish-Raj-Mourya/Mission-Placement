#include<iostream>
using namespace std;
int smallDigit(int number){
   int smallDigit=number%10;
   int digit=0;
   while(number!=0){
    digit=number%10;
    if(smallDigit>=digit){
        smallDigit=digit;
    }
    number=number/10;
   }
   cout<<"The smallest Digit is "<<smallDigit;
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    smallDigit(number);
    return 0;
}