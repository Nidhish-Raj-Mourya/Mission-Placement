#include<iostream>
using namespace std;
int main(){
    int number, digit1, digit2 , digit3;
    cin >> number;
    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;
    if(digit1 >= digit2 && digit1 >= digit3)
    cout <<"Largest Digit:"<<digit1<<endl;
    else 
    cout <<"Largest Digit:"<<digit3<<endl;
    return 0;
}
