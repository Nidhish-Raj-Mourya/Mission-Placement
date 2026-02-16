#include<iostream>
using namespace std;

int secondSmallest(int number)
{
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element ";
        cin>>a[i];
    }
    int smallest=a[0];

    for(int i=0;i<number;i++)
    {
        if(smallest>a[i])
        {
            smallest=a[i];
        }
    }

    int secondSmall=a[number-1];
    for(int i=0;i<number;i++)
    {
        if(a[i]!=smallest&&secondSmall>a[i])
        {
            secondSmall=a[i];
        }
    }

    cout<<"Second Smallest element is "<<secondSmall;
    
}

int main()
{
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    secondSmallest(size);
}