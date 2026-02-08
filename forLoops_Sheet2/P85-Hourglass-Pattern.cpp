#include<iostream>
using namespace std;

int hourglassPattern(int number)
{   
    int value=1;
    for(int i=1;i<=number;i++)
    {
        for(int j=i;j<=number;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
        if(i!=number)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<" ";
            }
        }
    }
    for(int i=(number-1);i>=1;i--)
    {   
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j<=number;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
        
    }
    
}

int main()
{
    int number;
    cout<<"Enter the n term ";
    cin>>number;

    hourglassPattern(number);
}