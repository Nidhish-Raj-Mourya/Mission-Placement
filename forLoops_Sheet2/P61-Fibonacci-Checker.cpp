#include<iostream>
using namespace std;

int fibonaccicheck(int check)
{
    int temp=0;
    int a=0;
    int b=1;
    
    for(int i=2;i<=check;i++)
    {
        if(b==check)
        {
            cout<<"it is in fibonacci number series";
        }
        temp=a+b;
        a=b;
        b=temp;
    }
}

int main(){

    int check;
    
    cout<<"enter the number ";
    cin>>check;

    fibonaccicheck(check);
    
    return 0;
}