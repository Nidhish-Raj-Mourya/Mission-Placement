#include<iostream>
using namespace std;
int main(){
    int divident,divisor;
    cout<<"enter divident";
    cin>>divident;
    cout<<"enter divisor";
    cin>>divisor;
    if(divident%divisor==0){
        cout<<"divisible";
    }
    else
    {
        cout<<"not divisible";
    }
}