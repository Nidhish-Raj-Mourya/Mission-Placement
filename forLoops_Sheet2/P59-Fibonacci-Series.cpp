#include<iostream>
using namespace std;

int fibonacci(int number)
{
    int temp=0;
    int a=0;
    int b=1;

    cout<<a<<" ";

    for(int i=2;i<=number;i++)
    {
        cout<<b<<" ";

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

    fibonacci(number);
    
    return 0;
}