#include<iostream>
using namespace std;

int mergeTwoSortedArray(int n1,int n2)
{
    int arr1[n1];
    int arr2[n2];

    for(int i=0;i<n1;i++)
    {
        cout<<"Enter the element ";
        cin>>arr1[i];
    }

    for(int i=0;i<n2;i++)
    {
        cout<<"Enter the element ";
        cin>>arr2[i];
    }

    int mergedArray[n1+n2];

    int i=0,j=0,k=0;
    while(i<n1||j<n2)
    {
        if(i==n1)
        {
            mergedArray[k]=arr2[j];
            j++;
            k++;
        }
        else if(j==n2)
        {
            mergedArray[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]<arr2[j])
        {
            mergedArray[k]=arr1[i];
            i++;
            k++;
        }
        else 
        {
            mergedArray[k]=arr2[j];
            j++;
            k++;
        }
    }

    for(int i=0;i<n1+n2;i++)
    {
        cout<<mergedArray[i]<<" ";
    }
}

int main()
{
    int size1,size2;

    cout<<"Enter size for array 1";
    cin>>size1;

    cout<<"Enter size for array 1";
    cin>>size2;

    mergeTwoSortedArray(size1,size2);
}