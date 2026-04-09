#include<iostream>
using namespace std;

int bubbleSort(int n)
{
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;

    cout<<"Enter the size of array ";
    cin>>size;

    bubbleSort(size);
}