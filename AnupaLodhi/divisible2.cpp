#include<iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    if(number % 2 == 0)
    {cout << "Divisible by 2";}
    else
    {cout << "Not divisible by 2";}
    if (number % 3 == 0)
    {cout << " Divisible by 3";}
    else 
    {cout << "Not divisible by 3";}
    if (number % 5 == 0)
    {cout << " Divisible by 5";}
    else 
    {cout << "Not divisible by 5";}
    if (number % 2 != 0 && number % 3 != 0 && number % 5 != 0)
    {cout << "Divisible by none";}
    return 0;

}