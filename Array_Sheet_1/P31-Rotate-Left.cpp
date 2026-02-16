#include<iostream>
using namespace std;

int moveToLeft(int number)
{
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the value ";
        cin>>a[i];
    }

    int temp=a[0];
    for(int i=0;i<number;i++)
    {
        for(int j=i+1;j>i;j--)
        {
            a[i]=a[j];
        }
    }
    
    a[number-1]=temp;
    
    for(int i=0;i<number;i++)
    {
        cout<<a[i];
    }
}


int main()
{
    int size;
    
    cout<<"Enter the size ";
    cin>>size;

    moveToLeft(size);
}