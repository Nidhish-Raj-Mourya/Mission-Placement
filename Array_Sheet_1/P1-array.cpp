#include<iostream>
using namespace std;

int iterateArray(int number)
{
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
    }

    for(int i=0;i<number;i++)
    {
        cout<<arrayOfLength[i]<<" ";
    }

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    iterateArray(size);

    return 0;

}