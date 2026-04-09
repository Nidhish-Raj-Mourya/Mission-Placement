#include<iostream>
using namespace std;

int binarySearchPeakElement(int a[],int size)
{
    int low=0,high=size-1;
    int outputIndex=-1;
    while(low<high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]>a[mid+1])
        {
            high=mid;
        }
        else 
        {
            low=mid+1;
        }
    }

    
        cout<<"Peak Element is "<<a[low];
}
int main()
{
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    int a[size];
    for(int i=0;i<size;i++)
    {
        cout<<"ENter element ";
        cin>>a[i];
    }

   
    

    binarySearchPeakElement(a,size);
}