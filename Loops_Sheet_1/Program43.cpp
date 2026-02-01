#include<iostream>
using namespace std;
int countDivisibleNumber(int number){
    int count=0;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<"\nTotal factor are "<<count;
}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    countDivisibleNumber(number);
}