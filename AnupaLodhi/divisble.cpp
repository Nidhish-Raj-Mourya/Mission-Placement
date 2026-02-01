#include<iostream>
using namespace std;
int main(){
    int number1, number2;
    cin >> number1 >> number2;
    if(number1 % number2 == 0)
    {cout << number1 << "is divisible by" << number2;}
    else
    {cout << number1 << "is not divisible by" << number2;}
    return 0;
}