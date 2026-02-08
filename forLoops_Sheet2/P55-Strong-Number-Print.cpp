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
        cout<<sum<<" ";
    }
}

int iterateUptoN(int number)
{
    int i=1;

    while(i<=number)
    {
        strongNumber(i);
        i++;
    }
}

int main()
{
    int number;

    cout<<"Enter the number ";
    cin>>number;

    iterateUptoN(number);

    return 0;
}