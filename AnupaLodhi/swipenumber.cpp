#include<iostream>
using namespace std;
int main(){
    int number1, number2;
    cin>> number1 >> number2;
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    cout << "After Swapping: " << number1 << " " << number2 << endl;
    return 0;   
}