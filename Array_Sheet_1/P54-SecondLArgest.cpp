#include<iostream>
using namespace std;

int secondLargest(int number)
{
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element ";
        cin>>a[i];
    }
    int largest=a[0];

    for(int i=0;i<number;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }

    int secondLargest=0;
    for(int i=0;i<number;i++)
    {
        if(a[i]!=largest&&secondLargest<a[i])
        {
            secondLargest=a[i];
        }
    }

    cout<<"Second Largest element is "<<secondLargest;
    
}

int main()
{
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    secondLargest(size);
}