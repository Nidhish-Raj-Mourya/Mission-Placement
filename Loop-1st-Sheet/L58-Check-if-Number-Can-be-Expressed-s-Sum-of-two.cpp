#include<iostream>
using namespace std;

int sumOfTwoPrimeNumber(int number){

    if(number<=1){
        return false;
    }
    for(int i =2;i<=number/2;i++){
        if(number%i==0)
            return false;
    }
    return true;
    
}

int golbach(int number){

    for(int i=2;i<=number/2;i++){
        if(sumOfTwoPrimeNumber(i)and sumOfTwoPrimeNumber(number-i)){
            cout<<number<<" "<<i<<" + "<<number-i<<endl;
        }
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    golbach(number);
}