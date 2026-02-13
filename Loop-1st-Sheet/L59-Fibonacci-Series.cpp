#include<iostream>
using namespace std;

int fibonacciSeries(int number){
    int fibonacci,number1=0,number2=1;
    for(int i=0;i<=number;i++){
        cout<<number1<<" ";
        fibonacci=number1+number2;
        number1=number2;
        number2=fibonacci;
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    fibonacciSeries(number);
}