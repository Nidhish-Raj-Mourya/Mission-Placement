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

    cout<<"Max element is "<<max<<"\n";

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    MaxMinArray(size);

    return 0;

}