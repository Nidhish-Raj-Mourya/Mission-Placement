#include<iostream>
using namespace std;

void extract()
{
    int number, lastDigit ;
    cout<<"enter a two digit number: ";
    cin>>number;
    lastDigit = number%10;
    cout<<"the last digit of this no. is:"<<lastDigit<<endl;
}
int main()
{
    extract();
}