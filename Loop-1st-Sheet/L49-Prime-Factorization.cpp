#include<iostream>
using namespace std;

int primeFactorNumber(int number){
    
    if(number<=1){
        cout<<"No Prime Factors : ";
        return false;
    }
    for(int i=2;i<=number;i++){
        for(;number%i==0;){
            cout<<i<<" ";
            number=number/i;
        }
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    primeFactorNumber(number);
}