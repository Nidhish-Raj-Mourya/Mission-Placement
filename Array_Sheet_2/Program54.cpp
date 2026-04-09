#include<iostream>
using namespace std;

int binarySearchFunc(int a[],int size,int position)
{
    int low=0,high=size-1;
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==a[position])
        {
            return mid;
        }
        else if(a[mid]<a[position])
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

    int position;
    cout<<"Enter the element";
    cin>>position;

    result=binarySearchFunc(a,size,position);
    if(result==-1)
    {
        cout<<"It is not present ";
    }
    else
    {
        cout<<"The K smallest element is "<<a[result-2];
    }
}