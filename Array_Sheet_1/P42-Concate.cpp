#include<iostream>
using namespace std;

int concateTwoArray(int number)
{
    int a[number],b[number];
    int mergedArray[number*2];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter element for array 1: ";
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        cout<<"Enter element for array 2: ";
        cin>>b[i];
    }

    for(int i=0;i<(number);i++)
    {
    
        mergedArray[i]=b[i];
    }
    
    for(int i=number;i<(number*2);i++)
    {
    
        mergedArray[i]=a[i-number];
    }
    

    for(int i=0;i<((number*2));i++)
    {
        cout<<mergedArray[i]<<" ";
    }

    return 0;
}

int main()
{
    int number;
    
    cout<<"Enter the size ";
    cin>>number;

    concateTwoArray(number);

}