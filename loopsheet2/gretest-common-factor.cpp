#include<iostream>
using namespace std;

int gcd(int num1,int num2){
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

    cout<<factor;

return 0;
}

int main(){
    int number1,number2;

    cout<<"the first number: ";
    cin>>number1;

    cout<<"the second number: ";
    cin>>number2;

    gcd(number1,number2);
    
    return 0;
}