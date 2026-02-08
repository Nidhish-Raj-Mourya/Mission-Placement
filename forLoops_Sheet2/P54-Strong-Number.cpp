#include<iostream>
using namespace std;

int fact(int number)
{
    int factorial=1;

    while(number!=0)
    {
        factorial*=number;
        number--;
    }

    return factorial;
}

int strongNumber(int number)
{
    int temp=number;
    int digit=0;
    int sum=0;

    while(number!=0)
    {
    digit=number%10;
    sum+=fact(digit);
    number=number/10;
    }
    
    if(sum==temp)
    {
        cout<<"it is a strong number";
    }
    else
    {
        cout<<"it is not a strong number";
    }
}

int main()
{
    int number;

    cout<<"Enter the number ";
    cin>>number;

    strongNumber(number);
    
    return 0;
}