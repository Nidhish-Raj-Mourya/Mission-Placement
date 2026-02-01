#include<iostream>
using namespace std;
int main(){
    int number, digit1, digit2 , digit3, reverse;
    cin >> number;
    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;
    reverse = (digit3 * 100) + (digit2 * 10) + digit1;
    if(number == reverse)
        cout <<"Palandrom:"<<number<<endl;
    else
        cout<<"Not Plandrom:"<<number<<endl;
     return 0;
}