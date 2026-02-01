#include<iostream>
using namespace std;
int primeNumberPrint(int number){
    for(int j=1;j<number;j++){
    int count=0;
    for(int i=2;i<j;i++){
        if(j%i==0){
            count++;
        }
    }
    if (count==0)
    {
        cout<<j<<" ";
    }
}}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    primeNumberPrint(number);
}