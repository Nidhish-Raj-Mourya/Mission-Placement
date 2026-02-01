#include<iostream>
using namespace std; 
int main(){
    int number;
    cout<<"Enter any number";
    cin>>number;
    if(number<0){
        cout<<"it is negative";
    }
    if(number>0){
        cout<<"it is positive";
    }
    if(number==0){
        cout<<"it is zero";
    }
}