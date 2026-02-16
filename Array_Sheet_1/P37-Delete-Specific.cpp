#include<iostream>
using namespace std;

int deleteSpecific(int number,int place)
{
    int a[number];
    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }
    
    for(int i=(place-1);i<=(number-2);i++)
    {  
        a[i]=a[i+1];      
    }
    a[number-1]=0;
    
    for(int i=0;i<number;i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main()
{
    int size,position,element;
    
    cout<<"Enter the size ";
    cin>>size;

    cout<<"Enter Position";
    cin>>position;

    deleteSpecific(size,position);
}