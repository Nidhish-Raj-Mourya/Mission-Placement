#include<iostream>
using namespace std;
int primeNumber(int number){
    int count=0;
    if(number==0){
        cout<<"0 is not prime number ";
        return 0;
    }
    if(number==1){
        cout<<"1 is not prime number ";
        return 0;
    }
    for(int i=2;i<number;i++){
        if(number%i==0){
            count++;
        }
    }
    if (count==0)
    {
        cout<<"it is a Prime Number ";
    }
    else
    {
        cout<<"It is not a Prime Number";
    }
}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    primeNumber(number);
}