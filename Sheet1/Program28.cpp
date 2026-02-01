#include<iostream>
using namespace std;
int Armstrong(int number){
    int temp=number;
    int digit=0;
    int sum=0;
    while(number!=0){
    digit=number%10;
    sum=sum+digit*digit*digit;
    number=number/10;
    }
    if(temp==sum){
        cout<<"it is an armstrong number";
    }
    else{
        cout<<"it is not an armstrong number";
    }
}
int main(){
    int number;
    cout<<"enter the number ";
    cin>>number;
    Armstrong(number);
}