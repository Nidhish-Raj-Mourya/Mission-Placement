#include<iostream>
using namespace std;

int diamondStar(int number)
{   int half;
    if(number%2==0)
    {
        half=number/2;
    }
    if(number%2==1)
    {
        half=(number/2)+1;
    }

    for(int i=1;i<half;i++)
        {
            for(int j=half;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<"\n";
        }
    
    for(int i=half;i>0;i--)
        {
            for(int j=half;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<"\n";
        }
}

int main()
{
    int number;

     cout<<"Enter the n th term ";
    cin>>number;
    diamondStar(number);

    return 0;
}