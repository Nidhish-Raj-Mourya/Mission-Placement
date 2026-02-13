#include<iostream>
using namespace std;

bool primeNumber(int number){
    if(number<=1){
        return false;
    }
    for(int i=2;i<=number/2;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}

int allPrimeNumber(int number){
    for(int i=1;i<=number;i++){
        if(primeNumber(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    allPrimeNumber(number);
}