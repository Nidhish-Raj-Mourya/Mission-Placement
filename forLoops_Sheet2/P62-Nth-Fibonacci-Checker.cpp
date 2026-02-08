#include<iostream>
using namespace std;

int fibonacciPositionN(int number)
{
    int temp=0;
    int a=0;
    int b=1;
    
    for(int i=2;i<=number;i++)
    {
        if(i==number)
        {
        cout<<b<<" ";
        }

        temp=a+b;
        a=b;
        b=temp;
    }
}

int main()
{
    int number;

    cout<<"enter the number ";
    cin>>number;

    fibonacciPositionN(number);

    return 0;
}