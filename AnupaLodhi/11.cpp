#include<iostream>
using namespace std;
int main(){
    int a = 5, b = 10 , c = 15;
    int result = (a < b) + (b < c) + (c < a);
    cout << result;
}