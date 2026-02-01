#include<iostream>
using namespace std;
int divisibleNumber(int number){
    int count=0;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    divisibleNumber(number);
}