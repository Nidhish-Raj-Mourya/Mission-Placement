#include<iostream>
using namespace std;
int main(){
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;
    if(number1 <= number2 && number2 <= number3)
    {cout << "Ascending Order";}
    else if(number1 >= number2 && number2 >= number3)
    {cout << "Descending Order";}
    else 
    {cout << "Neither Ascending nor Descending Order";}
    return 0;
}