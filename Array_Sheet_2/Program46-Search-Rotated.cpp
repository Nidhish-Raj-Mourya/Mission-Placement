#include<iostream>
using namespace std;

int binarySearch(int a[],int size,int element,int low,int high)
{
    
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==element)
        {
           return mid;
            break;
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
 int rotatedSortedArray(int a[],int size,int element,int low,int high)
 {
    int result=-1;
    for(int i=0;i<size;i++)
    {
        if(a[i]>a[i+1])
        {
            result=binarySearch(a,size,element,low,i);
            if(result==-1)
            {
            result=binarySearch(a,size,element,i+1,high);
            return result;
            }
            else
            {
                return result;
            }
            break;
        }
    }
    return -1;

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
    int low=0,high=size-1;
    int outputIndex= rotatedSortedArray(a,size,element,low,high);

    if(outputIndex==-1)
    {
        cout<<"it is not present ";

    }
    else
    {
        cout<<"Present at "<<outputIndex;
    }
}