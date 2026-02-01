#include<iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    if(number >= 0 && number <= 10)
    {cout <<"It is between 0-10";}
    else if(number >= 11 && number <= 50)
    {cout <<"It is between 11-50";}
    else if(number >= 51 && number <= 100)
    {cout <<"It is between 51-100";}
    else if(number >= 101 && number <= 500)
    {cout <<"It is between 101-500";}
    else if(number >= 501 && number <= 1000)
    {cout <<"It is between 501-1000";}
    else 
    {cout <<"Number is above 1000";}
    return 0;
    }