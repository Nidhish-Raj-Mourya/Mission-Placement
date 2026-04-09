#include<iostream>
using namespace std;

int insertionSort(int n)
{
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int smallestIndex=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<=a[i])
            {
                smallestIndex=j;
            }
        }

        int temp=a[i];
        a[i]=a[smallestIndex];
        a[smallestIndex]=temp;
            
        }
    

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int size;

    cout<<"Enter the size of array ";
    cin>>size;

    insertionSort(size);
}