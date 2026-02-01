#include<iostream>
using namespace std;
int main(){
    int principal = 20000;
    int rate = 5;
    int time = 3;
    int simple_interest = (principal * rate * time)/100;
    cout << "Simple Interest:" << simple_interest << endl;
    return 0;
}