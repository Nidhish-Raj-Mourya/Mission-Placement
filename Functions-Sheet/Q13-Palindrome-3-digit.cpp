#include<iostream>
using namespace std;
int palindrome(int firstNumber)
{
    int variable1,variable2,variable3;
    variable1=firstNumber%10;
    variable2=(firstNumber/10)%10;
    variable3=firstNumber/100;
    int result = ((variable1*100)+variable2*10)+variable3;
    if(firstNumber==result){
        cout<<"Palindrome : ";
    }
    else{
        cout<<"Not Palindrome : ";
    }
    return result;
}
int main(){
    int number1;
    cout<<"Enter the number : ";
    cin>>number1;
    int result = palindrome(number1);
    cout<<result;
}