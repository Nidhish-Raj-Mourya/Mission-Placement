#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    if(number%2==0){
        cout<<"Number is divisble by two "<<endl;
    }
    else{
        cout<<"Number is not divisble by two "<<endl;
    }
    if(number%3==0){
        cout<<"Number is divisble by three "<<endl;
    }
    else{
        cout<<"Number is not divisble by three "<<endl;
    }
    if(number%5==0){
        cout<<"Number is divisble by five "<<endl;
    }
    else{
        cout<<"Number is not divisble by five "<<endl;
    }
}