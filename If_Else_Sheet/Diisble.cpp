#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter Number";
    cin>>number;
    if(number%2!=0){
        cout<<"it is not divisible by 2 \n";
    }
    else{
        cout<<"it is divisible by 2 \n";
    }
    if(number%3!=0){
        cout<<"it is not divisible by 3 \n";
    }
    else{
        cout<<"it is divisible by 3 \n";
    }
    if(number%5!=0){
        cout<<"it is not divisible by 5 \n";
    }
    else{
        cout<<"it is divisible by 5 \n";
    }
    if(number%2!=0 && number%3!=0 && number%5!=0){
        cout<<"it is divisible by none \n";
    }

    return 0;
}