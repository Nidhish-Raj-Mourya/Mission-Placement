#include<iostream>
using namespace std;

int moveToRight(int number)
{
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the value ";
        cin>>a[i];
    }

    int temp=a[number-1];
    for(int i=number-1;i>0;i--)
    {  
        a[i]=a[i-1];      
    }
    a[0]=temp;
    
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

    moveToRight(size);
}