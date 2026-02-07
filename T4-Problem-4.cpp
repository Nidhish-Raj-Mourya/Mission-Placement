#include<iostream>
using namespace std;

int closestToXDivisibleByY(int xValue,int yValue){
    for(int i=1;i<=xValue;i++){
        if(xValue%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}

int main(){

    int xValue,yValue;

    cout<<"Enter the number : ";
    cin>>xValue;

    cout<<"Enter the number : ";
    cin>>yValue;

    closestToXDivisibleByY(xValue,yValue);
}