#include<iostream>
using namespace std;
int Palindrome(int number){
    int temp=number;
    int digit=0;
    int reverse=0;
    while(number!=0){
    digit=number%10;
    reverse=reverse*10+digit;
    number=number/10;
    }
    if(temp==reverse){
    cout<<"it is Palindrome";
    }
    else{
    cout<<"it is not Palindrome";
    }
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    Palindrome(number);
    return 0;


}