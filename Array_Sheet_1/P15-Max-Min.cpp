#include<iostream>
using namespace std;

int MaxMinArray(int number)
{
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
    }

    int max=arrayOfLength[0];

    for(int i=1;i<number;i++)
    {
        if(max<arrayOfLength[i])
        {
            max=arrayOfLength[i];
        }
    }

    int min=arrayOfLength[0];

    for(int i=1;i<number;i++)
    {
        if(min>arrayOfLength[i])
        {
            min=arrayOfLength[i];
        }
    }
    cout<<"Max element is "<<max<<"\n";
    cout<<"Min element is "<<min;

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    MaxMinArray(size);

    return 0;

}