#include<iostream>
using namespace std;

int iterateReverseArray(int number)
{
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
    }

    for(int i=number-1;i>=0;i--)
    {
        cout<<arrayOfLength[i]<<" ";
    }

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    iterateReverseArray(size);

    return 0;

}