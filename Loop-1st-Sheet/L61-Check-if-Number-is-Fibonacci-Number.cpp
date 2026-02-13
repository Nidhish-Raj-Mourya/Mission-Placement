#include<iostream>
using namespace std;

int fibonacciSeries(int number,int finding){
    int fibonacci,number1=0,number2=1,flag=false;
    for(int i=0;i<=number;i++){
        cout<<number1<<" ";
        fibonacci=number1+number2;
        if(fibonacci==finding){
            flag=true;
        }
        number1=number2;
        number2=fibonacci;
    }
    if(flag==true){
        cout<<endl<<"Its in Fibonacci series  ";
    }
    else{
        cout<<endl<<"Its not in Fibonacci series  ";
    }
    return 0;
}

int main(){
    int number,finding;

    cout<<"Enter the number : ";
    cin>>number;

    cout<<"Enter the finding number : ";
    cin>>finding;

    fibonacciSeries(number,finding);
}