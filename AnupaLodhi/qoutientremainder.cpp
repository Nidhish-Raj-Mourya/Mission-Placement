#include<iostream>
using namespace std;
int main(){
    int number1 = 45;
    number1 = number1 / 10;
    number1 = number1 % 10;
    cout << "Quotient:" << number1 / 10 << endl;
    cout << "Remainder:" << number1 % 10 << endl;
    return 0;   
}