#include<iostream>
using namespace std;

int sumProperDivisors(int number){
    
    int sum=0;
    for(int i=2;i<number;i++){
        if(number%i==0){
            sum=sum+i;
            cout<<i<<" ";
        }
    }
    cout<<sum;
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    sumProperDivisors(number);
}