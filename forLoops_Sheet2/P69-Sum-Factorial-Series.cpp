#include<iostream>
using namespace std;

int factorial(int number)
{
    int fact=1;

    while(number>0)
    {
    fact*=number;
    number--;
    }

    return fact;
}

int harmonicFactorial(int number)
{
    float constI=1;
    float sum=0;

    for(int i=1;i<=number;i++)
    {
        sum+=(constI/factorial(i));
    }

    cout<<sum<<" ";
}

int main()
{
    int nTerm;

    cout<<"Enter the n term";
    cin>>nTerm;

    harmonicFactorial(nTerm);

    return 0;
}