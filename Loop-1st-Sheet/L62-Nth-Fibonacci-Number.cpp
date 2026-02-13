#include<iostream>
using namespace std;

int fibonacciSeries(int number,int nthTerm){
    int fibonacci,number1=0,number2=1;
    for(int i=1;i<=number;i++){
        if(i==nthTerm){
            cout<<number1<<endl;
        }
        fibonacci=number1+number2;

        number1=number2;
        number2=fibonacci;
    }
    return 0;
}

int main(){
    int number,nthTerm;

    cout<<"Enter the number : ";
    cin>>number;

    cout<<"Enter the Nth Position : ";
    cin>>nthTerm;

    fibonacciSeries(number,nthTerm);
}