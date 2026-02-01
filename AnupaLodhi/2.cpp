#include<iostream>
using namespace std;


int main () {


    int number1 = 2;
    int number2 = 3;
    int number3 = 0;
    number3 = number1;
    number1 = number2;
    number2 = number3;
    cout <<"After swapping:" << number1 << " " << number2 << endl;
    return 0;

}