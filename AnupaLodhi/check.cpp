#include<iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    if(number >= 0 && number <= 9)
    {cout <<"Number is single digit";}
    else if(number >= 10 && number <= 99)
    {cout <<"Number is two digit";}
    return 0;
}