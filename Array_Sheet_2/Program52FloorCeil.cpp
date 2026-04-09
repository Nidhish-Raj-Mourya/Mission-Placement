#include<iostream>
using namespace std;

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
    if(outputIndex==-1)
    {
        return -1;

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
        cout<<"Enter element ";
        cin>>a[i];
    }

   int x;
   cout<<"ENter the value for x ";
   cin>>x;
    

   int floor=0,ceil=0;
    int result=binarySearch(a,size,x);
    if(result==-1)
    {
        cout<<"Not FOund";
    }
    else
    {
        floor =result-1;
        ceil=result+1;
    }

    cout<<"The floor element is "<<a[floor]<<endl;
    cout<<"The ceil element is "<<a[ceil];
}