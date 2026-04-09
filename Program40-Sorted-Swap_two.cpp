#include<iostream>
using namespace std;

int swapIfItCanBeSwapped(int n)
{
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element ";
        cin>>arr[i];
    }

    int count=0;

    int i=1,j=n-2;
    while(i!=j)
    {
        if(arr[i-1]>arr[i] ||arr[i]>arr[i+1])
        {
           if(arr[j]>arr[j+1]||arr[j]<arr[j-1])
           {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            count++;
            i++;
            continue;
           } 
           else
            {
                j--;
            }
        }
        else
        {
            i++;
        }

    }
    if(count==1)
    {
        cout<<"It can be sorted in a single pass";
    }
    else
    {
        cout<<"It need more pass";
    }
}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    swapIfItCanBeSwapped(size);
}