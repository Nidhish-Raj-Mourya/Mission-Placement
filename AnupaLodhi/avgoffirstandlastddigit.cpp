#include<iostream>
using namespace std;
int main(){
    int number, digit1, digit2 , digit3, digit4;
    cin >> number;
    digit1 = number / 1000;
    digit1 = number % 1000;
    digit2 = number / 100;
    digit2 = number % 100;
    digit3 = number / 10;
    digit4 = digit3 % 10;
    cout <<"Average of First and Last Digit:"<<(digit1 + digit4)/2<<endl;
    return 0;
    
}   