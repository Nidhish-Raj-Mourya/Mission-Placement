#include<iostream>
using namespace std;

int allDivisor(int number){

    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" and "<<number/i<<endl;
        }
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    allDivisor(number);
}