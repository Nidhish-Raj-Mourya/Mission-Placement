#include<iostream>
using namespace std;
int reverseNumber(int number){
    int digit=0;
    int reverse=0;
 while(number!=0){
    digit=number%10;
    reverse=reverse*10+digit;
    number=number/10;
 }
 cout<<"Reverse is "<<reverse;
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    reverseNumber(number);
    return 0;


}