#include<iostream>
using namespace std;
int lastEven(int firstNumber)
{
    int lastDigit=firstNumber%10; 
    if(lastDigit%2==0){
        cout<<"Even : ";
    }
    else{
        cout<<"Odd : ";
    }
    return lastDigit;
}
int main(){
    int number1;
    cout<<"Enter the number : ";
    cin>>number1;
    int result = lastEven(number1);
    cout<<result;
}