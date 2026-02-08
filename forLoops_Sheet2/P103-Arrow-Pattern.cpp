#include<iostream>
using namespace std;

int starPattern(int number)
{   
    for(int i=1;i<=number;i++)
        {
            for(int j=number;j>=i;j--)
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

int ArrowPattern(int number)
{
    if(number%2==0)
    {   number=number/2;
        starPattern(number);
    }
    else
    {
        number=(number+1)/2;
        starPattern(number);
    }
    if(number%2==0)
    {
        for(int i=0;i<number;i++)
        {
            for(int j=0;j<(number)/2;j++)
            {
                cout<<" ";
            }
            
            for(int j=0;j<number;j++)
            {
                if(j==(number/2))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        cout<<"\n";
        }
    }
    else
    {
        for(int i=1;i<number;i++)
        {
            for(int j=0;j<((number/2)+1);j++)
            {
                cout<<" ";
            }
            
            for(int j=0;j<number;j++)
            {   
                if(j==(number/2))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        cout<<"\n";
        }
    }
}

int main()
{
    int number;
    
    cout<<"Enter the n th term ";
    
    cin>>number;
    ArrowPattern(number);

    return 0;
}