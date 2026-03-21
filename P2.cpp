//Question 2: Check ifArray is Sorted and Rotated
//Problem Statement
//You are given an arrayA of N integers. The array is said to be "sorted and rotated" if it was
//originally sorted in ascending order and then rotated by some positions.
//For example: [3, 4, 5, 1, 2] is sorted and rotated (originally [1, 2, 3, 4, 5] rotated by 3 positions)
//Your task is to check if the given array is sorted and rotated. Return 1 if true, 0 if false.

#include<iostream>
using namespace std;

int sortedAscending(int n)

{
    if(n<1||n>100000)
    {
        cout<<"Invalid input";
        return 0;
    }

    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>1000000000||a[n]<1)
        {
            cout<<"Invalid input";
            return 0;
        }
    }

    int rotated=0;
    for(int i=0;i<=n-1;i++)
    {
        if(i==0)
        {
            if(a[i]>a[i+1])
                {
                    rotated=i;
                    break;
                }
        }
        else if(a[i]>a[i-1]||a[i]>a[i+1])
        {
            rotated=i;
            break;
        }

    }
    int sorted=1;
    for(int i=1;i<=rotated;i++)
    {
        if(a[i]>a[i-1])
        {
            sorted=1;
        }
        else
        {
            sorted=0;
            break;
        }
    }
    for(int i=rotated+1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            sorted=1;
        }
        else
        {
            sorted=0;
            break;
        }
    }
    if(sorted==1||rotated!=0)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
}

int main()
{
    
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    sortedAscending(size);

}