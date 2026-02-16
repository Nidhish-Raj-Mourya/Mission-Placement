#include<iostream>
using namespace std;

int insertSpecific(int number,int place,int element)
{
    int a[number];
    

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }
    a[number+1];
    
    for(int i=number;i>(place-1);i--)
    {  
        a[i]=a[i-1];      
    }
    a[place-1]=element;
    
    for(int i=0;i<=number;i++)
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

    cout<<"Enter element";
    cin>>element;
    insertSpecific(size,position,element);
}