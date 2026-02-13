#include<iostream>
using namespace std;

int primeNumber(int number){
    if(number<=1){
        cout<<"Its a Prime Number : "<<number;
    }
    for(int i=2;i<number/2;i++){
        if(number%i==0){
            cout<<"Its not a Prime : "<<number;
            break;
        }
        else{
            cout<<"Its a Prime : "<<number;
            break;
        }
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    primeNumber(number);
}