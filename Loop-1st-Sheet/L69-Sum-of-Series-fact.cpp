#include<iostream>
using namespace std;

float factorial(float number){
    float fact=1,sum=0;
    for(int i=1;i<=number;i++){
        fact=fact*i;
        sum=sum+(1/fact);
    }
    cout<<sum;
    return 0;
}


int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    factorial(number);
}