#include<iostream>
using namespace std;
int main(){
    int years;
    cin >> years;
    if(years % 4 == 0 && (years % 100 != 0 || years % 400 == 0))
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";
}