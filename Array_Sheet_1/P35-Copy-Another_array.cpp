#include<iostream>
using namespace std;

int arrayCopy(int number)
{
    int a[number];
    int copyOfA[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        copyOfA[i]=a[i];
    }

    for(int i=0;i<number;i++)
    {
        cout<<copyOfA[i];
    }
}

int main()
{
    int size;
    
    cout<<"Enter the size ";
    cin>>size;

    arrayCopy(size);
}