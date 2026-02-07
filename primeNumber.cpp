#include<iostream>
using namespace std;

bool primeNumber(int number){
    int i=2;
    bool flag=true;

    while(i<=number/2){
        
        if(number%i==0){
            flag=false;
            return flag;
        }
        i++;
    }
    return flag;
}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    if(primeNumber(number)){
        cout<<"number is prime";
    }
    else{
        cout<<"number is not prime";
    }

    return 0;
}