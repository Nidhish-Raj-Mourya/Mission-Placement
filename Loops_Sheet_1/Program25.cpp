#include<iostream>
using namespace std;
int productDigit(int number){
   int product=1;
   while(number!=0){
    product*=number%10;
    number=number/10;
   }
   cout<<"The product of digits is "<<product;
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    productDigit(number);
    return 0;
}