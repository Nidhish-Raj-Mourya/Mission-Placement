#include<iostream>
using namespace std;

int sortZeroOneArray(int n)
{
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element ";
        cin>>arr[i];

        if(arr[i]!=0&&arr[i]!=1)
        {
            cout<<"Invalid ";
            return 0;
        }
    }

    int j=n-1;
    int i=0;

    while(j!=i)
    {
        if(arr[i]==0)
        {
            i++;
            continue;
        }
        else
        {
            if(arr[j]==0)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
            }
            else
            {
                j--;
            }
        }
   }


    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;

    cout<<"enter the size ";
    cin>>size;

    sortZeroOneArray(size);
}