#include<iostream>
using namespace std;

int arrayFunc(int number)
{
    int temp=0;
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element "<<i<<" ";
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        for(int j=i+1;j<number;j++)
        {   
            if(a[i]==0)
            {    
                if(a[j]!=0)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    break;
                } 
            }
        }
    }
    for(int i=0;i<number;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    arrayFunc(size);
}