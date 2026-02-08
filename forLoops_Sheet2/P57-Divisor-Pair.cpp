#include<iostream>
using namespace std;

int divisorPair(int number)
{
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            cout<<"Pair  is :"<<i<<" "<<(number/i)<<"\n";
        }
    }
}

int main()
{
    int number;

    cout<<"enter the number ";
    cin>>number;

    divisorPair(number);
    
    return 0;
}