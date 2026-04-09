#include<iostream>
using namespace std;

int binarySearchFunc(int a[],int size,int element)
{
    int low=0,high=size-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==element)
        {
            return mid;
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
    return -1;
}
int main()
{
    int size,result;

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

    result=binarySearchFunc(a,size,element);
    if(result==-1)
    {
        cout<<"It is not present ";
    }
    else
    {
        cout<<"It is present at position "<<result;
    }
}