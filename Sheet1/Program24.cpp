#include<iostream>
using namespace std;
int sumDigit(int number){
   int sum=0;
   while(number!=0){
    sum+=number%10;
    number=number/10;
   }
   cout<<"The sum of digits is "<<sum;
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    sumDigit(number);
    return 0;
}