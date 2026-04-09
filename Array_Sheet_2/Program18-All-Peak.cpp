#include<iostream>
using namespace std;

int peakElement(int number)
{

    int a[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=number-1;i>=0;i--)
    {   if(i==(number-1) || i== 0)
        {
            continue;
        }
        if( a[i]>=a[i-1] && a[i]>=a[i+1] )
        {
            cout<<"Element is "<<a[i];
        }
    }
}

int main()
{
    int size,K,sum;

    cout<<"Enter the Size ";
    cin>>size;

    peakElement(size);
}