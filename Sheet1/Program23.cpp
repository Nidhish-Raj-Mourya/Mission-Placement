#include<iostream>
using namespace std;
int countDigit(int number){
   int count=0;
   while(number!=0){
    count++;
    number=number/10;
   }
   cout<<"The number of digits are "<<count;
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    countDigit(number);
    return 0;
}