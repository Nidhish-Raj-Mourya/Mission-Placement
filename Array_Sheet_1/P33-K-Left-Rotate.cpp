#include<iostream>
using namespace std;

int kLeft(int number,int k)
{
    int a[number];


    for(int i=0;i<number;i++)
    {
        cout<<"Enter the value ";
        cin>>a[i];
    }

    for(int i=0;i<k;i++)
    {
    int temp=a[0];
    for(int i=0;i<number;i++)
    {
        for(int j=i+1;j>i;j--)
        {
            a[i]=a[j];
        }
    }
    a[number-1]=temp;
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

    kLeft(size,K);
}