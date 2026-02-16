#include<iostream>
using namespace std;

int nThLargeElement(int number,int place)
{

    int temp=0;
    int a[number];
    
    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element ";
        cin>>a[i];
    }

    for(int j=0;j<number;j++)
    {
    for(int i=j+1;i<number;i++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    for(int i=0;i<number;i++)
    {
        cout<<a[i]<<" ";
        
    }

    cout<<"\n";
    cout<<place<<"d Largest Element is "<<a[place-1];

}

int main()
{
    int size,n;

    cout<<"Enter the size ";
    cin>>size;
    
    cout<<"Enter the nth Place";
    cin>>n;

    nThLargeElement(size,n);
}