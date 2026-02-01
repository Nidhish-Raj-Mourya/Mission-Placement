#include<iostream>
using namespace std;
int average(int firstNumber)
{
    float variable1,variable2;
    variable1=firstNumber/1000;
    variable2=firstNumber%10;
    float result=(variable1+variable2)/2;
    return result;
   
}
int main(){
    float number1;
    cout<<"Enter the number : ";
    cin>>number1;
    float result = average(number1);
    cout<<result;
}