#include<iostream>
using namespace std;

int powerCalculator(int base , int exponent){
    int power=1;
    for(int i=1;i<=exponent;i++){
        power = power*base;
    }
    cout<<power;
    return 0;
}

int main(){
    int base,exponent;
    cout<<"Enter the base : ";
    cin>>base;

    cout<<"Enter the exponent : ";
    cin>>exponent;

    powerCalculator(base,exponent);

}