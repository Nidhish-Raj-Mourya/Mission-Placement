#include<iostream>
using namespace std;

int countPrimeFactorNumber(int number){
    int count=0;
    if(number<=1){
        cout<<"No Prime Factors : ";
        return false;
    }
    for(int i=2;i<=number;i++){
        for(;number%i==0;){
            cout<<i<<" ";
            count++;
            number=number/i;
        }
    }
    cout<<endl<<"Count is : "<<count;
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    countPrimeFactorNumber(number);
}