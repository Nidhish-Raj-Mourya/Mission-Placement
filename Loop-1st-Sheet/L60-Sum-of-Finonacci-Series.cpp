#include<iostream>
using namespace std;

int FibonacciSeries(int number){
    int fibonacci,number1=0,number2=1,sum=0;
    for(int i=1;i<=number;i++){
        cout<<number1<<" ";
        sum=sum+number1;
        fibonacci=number1+number2;
        number1=number2;
        number2=fibonacci;
    }
    cout<<"Sum is : "<<sum;
    return 0;
}


int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    FibonacciSeries(number);
}