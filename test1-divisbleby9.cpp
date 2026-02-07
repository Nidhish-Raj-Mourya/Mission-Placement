#include<iostream>
using namespace std;
int disibleby9(int num){
    int digit;
    int sum =0;
    for(int i= 1;i<=999;i++){
        digit = num%10;
        sum = sum +digit;
        num = num/10;
    }
    if(sum%9==0){
        cout<<"Yes the number is divisble by 9";
    }
    else{
        cout<<"No the number is not divisble by 9";
    }
    return 0;
}
int main(){
    int number;

    cout<<"Enter the number: ";
    cin>>number;

    disibleby9(number);


    return 0;
}