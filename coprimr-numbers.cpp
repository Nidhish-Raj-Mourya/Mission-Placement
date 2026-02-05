#include<iostream>
using namespace std;

int coprime(int num1,int num2){
    int i=2;
    int factor=1;
    while(i<=num1&&i<=num2){
        if(num1%i==0&&num2%i==0){
           factor *= i;
           num1 = num1/i;
           num2 = num2/i;
        }
        i++;
    }
    if(factor==1){
        cout<<num1<<" and "<<num2<<" are co-prime";
    }
    else{
        cout<<num1<<" and "<<num2<<" are not co-prime";
    }

return 0;
}

int main(){
    int number1,number2;

    cout<<"the first number: ";
    cin>>number1;

    cout<<"the second number: ";
    cin>>number2;

    coprime(number1,number2);
    
    return 0;
}