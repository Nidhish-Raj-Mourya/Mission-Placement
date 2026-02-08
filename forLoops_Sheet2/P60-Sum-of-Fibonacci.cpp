#include<iostream>
using namespace std;

int fibonacciSum(int number)
{
    int temp=0;
    int sum=0;
    int a=0;
    int b=1;

    cout<<a<<" ";

    for(int i=2;i<=number;i++)
    {
        cout<<b<<" ";
        sum+=b;
        temp=a+b;
        a=b;
        b=temp;
    }

    cout<<"The sum is "<<sum;
}

int main()
{
    int number;

    cout<<"enter the number ";
    cin>>number;

    fibonacciSum(number);
    
    return 0;
}