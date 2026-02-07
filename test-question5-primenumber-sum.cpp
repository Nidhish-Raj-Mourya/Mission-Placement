#include<iostream>
using namespace std;
int prime(int num1,int num2){
    int digit,sum =0;
    for(int i=num1;i<=num2;i++){
        if(i%i==0&&i%2!=0){
         cout<<i<<" ";
        }
    }

    return 0;
}    
int main(){
    int number1,number2;

    cout<<"The number1 is ";
    cin>>number1;

    cout<<"The number2 is ";
    cin>>number2;

    prime(number1,number2);

    return 0;
}
