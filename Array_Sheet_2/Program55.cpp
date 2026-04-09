#include<iostream>
using namespace std;

int medianCalculation(int a[],int size ,int b[],int size2)
{
    int median, sum=size+size2;
    if(sum%2==0)
    {
        median=sum/2;
        if(median<size)
        {
            cout<<(a[median-1]+a[median])/2;
        }
        else
        {
            median=median-size;
            cout<<(float)(b[median-1]+b[median])/2.0f;
        }
    }
    else
    {
        median=(sum+1)/2;
        
        if(median<size)
        {
            cout<<a[median-1];
        }
        else
        {
            median=median-size;
            cout<<b[median-1];
        }
    }

}
int main()
{

    int size,size2;

    cout<<"Enter the Size for 1st array";
    cin>>size;

    int a[size];
    for(int i=0;i<size;i++)
    {
        cout<<"ENter element ";
        cin>>a[i];
    }

    cout<<"Enter the Size for 2nd array";
    cin>>size2;

    int b[size2];
    for(int i=0;i<size2;i++)
    {
        cout<<"ENter element ";
        cin>>b[i];
    }

    medianCalculation(a,size,b,size2);

}