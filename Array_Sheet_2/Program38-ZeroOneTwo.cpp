#include<iostream>
using namespace std;

int sortZeroOneTwoArray(int n)
{
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element ";
        cin>>arr[i];

        if(arr[i]!=0&&arr[i]!=1&&arr[i]!=2)
        {
            cout<<"Invalid ";
            return 0;
        }
    }

    int h=n-1;
    int l=0,m=0;

    while(m<=h)
    {
        if(arr[m]==0)
        {
            int temp=arr[l];
            arr[l]=arr[m];
            arr[m]=temp;
                
            m++;
            l++;
            
        }
        else if(arr[m]==1)
        {
            m++;

        }
        else if(arr[m]==2)
        {
        
            int temp=arr[h];
            arr[h]=arr[m];
            arr[m]=temp;
            
            m++;
            h--;
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

    cout<<"Enter size ";
    cin>>size;

    sortZeroOneTwoArray(size);
}