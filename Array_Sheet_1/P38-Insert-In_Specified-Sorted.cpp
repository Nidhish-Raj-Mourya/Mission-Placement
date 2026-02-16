#include<iostream>
using namespace std;

int insertSpecified(int number,int element)
{
    int count=0,place=0;
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter Element in sorted way ";
        cin>>a[i];
    }
    for(int i=0;i<number;i++)
    {
        if(a[i]>a[i+1])
        {
            count++;
        }
    }
    if(count!=0)
    {
        cout<<"It is not a sorted array ";
        return 0;
    }
    for(int i=0;i<number;i++)
    {
        if(element<a[0])
        {
            place=0;
        }
        if(a[i]<=element&&element<=a[i+1])
        {
            place=i+1;
        }
        else if(element>a[number-1])
        {
            place=number+1;
        }
    }

    a[number+1];

    for(int i=number;i>(place-1);i--)
    {  
        a[i]=a[i-1];      
    }
    
    a[place]=element;

    for(int i=0;i<=number;i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    int size,element,place;
    
    cout<<"Enter Size ";
    cin>>size;

    cout<<"Enter element ";
    cin>>element;

    insertSpecified(size,element);
}