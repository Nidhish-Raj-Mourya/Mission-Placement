#include<iostream>
using namespace std;
int bouncyNumber(int number){
    int variable1,variable2,variable3;
    variable1=number/100;
    variable2=(number/10)%10;
    variable3=number%10;
    if(variable1>variable2 and variable2>variable3 or variable1<variable2 and variable2<variable3){
        cout<<"Not Bouncy Number : ";
    }
    else{
        cout<<"Bouncy Number : ";
    }
    return number;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int result = bouncyNumber(number);
    cout<<result;
}