#include<iostream>
using namespace std;

int MaxMinArray(int number)
{
    int count=0;
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
    }

    int min=arrayOfLength[0];

    for(int i=1;i<number;i++)
    {
        if(min>arrayOfLength[i])
        {
            count=i+1;
            min=arrayOfLength[i];
        }
    }
    cout<<"Min element is "<<min<<" at "<<count<<" place";

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    MaxMinArray(size);

    return 0;

}