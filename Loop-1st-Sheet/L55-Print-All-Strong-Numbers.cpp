#include<iostream>
using namespace std;

int strongNumber(int number){

    int actualNumber,digit,sum=0;
    actualNumber=number;
    for(;number!=0;){
        int product=1;
        digit=number%10;
        number=number/10;
        for(int i=1;i<=digit;i++){
            product=product*i;
        }
        sum=sum+product;
    }
    if(sum==actualNumber){
        cout<<sum<<" ";
    }
    return 0;
}

int allStrongNumber(int number){

    for(int i=1;i<=number;i++){
        if(strongNumber(i))
        cout<<i<<" ";
    }
    return 0;
}
int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    allStrongNumber(number);
}