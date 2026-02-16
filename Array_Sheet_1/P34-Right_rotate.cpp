#include<iostream>
using namespace std;

int moveToRight(int number,int k)
{
    int a[number];

    
    for(int i=0;i<number;i++)
    {
        cout<<"Enter the value ";
        cin>>a[i];
    }

    for(int j=0;j<k;j++)
    {
        int temp=a[number-1];
        for(int i=number-1;i>0;i--)
        {  
            a[i]=a[i-1];      
        }
        a[0]=temp;
    }

    for(int i=0;i<number;i++)
    {
        cout<<a[i];
    }
}

int main()
{
    int size,K;
    
    cout<<"Enter the size ";
    cin>>size;

    cout<<"Enter the K term ";
    cin>>K;

    moveToRight(size,K);
}