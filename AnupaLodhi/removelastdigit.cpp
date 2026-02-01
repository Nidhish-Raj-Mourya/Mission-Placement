#include<iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    number = number / 100;
    cout << "Number after removing last digit:" << number << endl;
    return 0;   
}