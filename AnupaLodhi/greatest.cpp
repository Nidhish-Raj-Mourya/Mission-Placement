#include<iostream>
using namespace std;
int main() {
    int number1, number2;
    cin >> number1 >> number2;
    if(number1 > number2)
     {cout << number1;}
    else if (number2 > number1)
    {cout << number2;}
    else
    {cout << "Both are equal";}
    return 0;
}