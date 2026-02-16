#include<iostream>
using namespace std;

int arrayFunc(int number)
{
    int count=0;
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
            if(a[i]>a[j])
            {    
                count=1;
            }
        }
    }
    
    if(count==0)
    {
        cout<<"It is sorted ascending order array. ";
    }
    else
    {
        cout<<"It is not a sorted ascending order array. ";
    }
    
}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    arrayFunc(size);
}