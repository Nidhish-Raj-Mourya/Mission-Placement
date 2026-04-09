#include<iostream>
using namespace std;

int zeroOneTwo(int a[],int num)
{
    int zeroCount=0,oneCount=0,twoCount=0;
    for(int i=0;i<num;i++)
    {
        if(a[i]==0)
        {
            zeroCount++;
        }
        if(a[i]==1)
        {
            oneCount++;
        }
        if(a[i]==2)
        {
            twoCount++;
        }
    }
    int place=0;

    for(int i=0;i<zeroCount;i++)
    {
        a[place]=0;
        place++;
    }
    for(int i=0;i<oneCount;i++)
    {
        a[place]=1;
        place++;
    }
    for(int i=0;i<twoCount;i++)
    {
        a[place]=2;
        place++;
    }

    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array ";
    cin>>size;

    int a[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element ";
        cin>>a[i];
    }

    zeroOneTwo(a,size);
}