#include<iostream>
using namespace std;
int reverse(int firstNumber)
{
    int variable1,variable2;
    variable1=firstNumber%10;
    variable2=firstNumber/10;
    int result = (variable1*10)+variable2;
    return result;
}
int main(){
    int number1;
    cout<<"Enter the number : ";
    cin>>number1;
    int result = reverse(number1);
    cout<<result;
}