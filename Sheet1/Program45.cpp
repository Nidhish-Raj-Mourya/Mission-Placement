#include<iostream>
using namespace std;
int sumDivisorNumber(int number){
    int sum=0;
    for(int i=2;i<number;i++){
        if(number%i==0){
            cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<"\nthe sum of factors is "<<sum;
}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    sumDivisorNumber(number);
}