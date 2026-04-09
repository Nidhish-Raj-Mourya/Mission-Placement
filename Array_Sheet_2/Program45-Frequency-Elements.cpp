#include<iostream>
using namespace std;

int binarySearchFirstOccurence(int a[],int size,int element)
{
    int low=0,high=size-1;
    int outputIndex=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==element)
        {
            outputIndex=mid;
            high=mid-1;
        }
        else if(a[mid]<element)
        {
            low=mid+1;
            
        }
        else
        {
            high=mid-1;
            
        }
    }
    if(outputIndex==-1)
    {
        cout<<"it is not present ";

    }
    else
    {
         return outputIndex;
    }
}

int binarySearchlastOccurence(int a[],int size,int element)
{
    int low=0,high=size-1;
    int outputIndex=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==element)
        {
            outputIndex=mid;
            
            low=mid+1;
        }
        else if(a[mid]<element)
        {
            low=mid+1;
            
        }
        else
        {
            high=mid-1;
            
        }
    }
    if(outputIndex==-1)
    {
        cout<<"it is not present ";

    }
    else
    {
        return outputIndex;
    }
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

    int element;
    cout<<"Enter the element";
    cin>>element;

    int frequency=binarySearchlastOccurence(a,size,element)-binarySearchFirstOccurence(a,size,element)+1;
    cout<<"Frequency is "<<frequency;
}