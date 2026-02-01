#include<iostream>
using namespace std;
int main(){
    int divisor,divident;
    cout<<"Enter the no. : ";
    cin>>divident;
    cout<<"Enter the no. : ";
    cin>>divisor;
    if(divident%divisor==0){
        cout<<"Its divisble";
    }
    else{
        cout<<"Its not divisble";
    }
}