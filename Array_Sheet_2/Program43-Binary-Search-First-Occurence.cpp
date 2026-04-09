#include<iostream>
using namespace std;

int binarySearch(int a[],int size,int element)
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
        cout<<"Present at "<<outputIndex;
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

    binarySearch(a,size,element);
}