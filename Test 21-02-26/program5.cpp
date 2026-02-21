#include<iostream>
using namespace std;

int ZeroPush(int number)
{

     if(number<=0 || number>=100000)
    {
        cout<<"Invalid Input";
        return 0;
    }

    int digitCount=0;
    int arr[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element ";
        cin>>arr[i];
    }

    for(int i=0;i<number;i++)
    {
        if(arr[i]<0 || arr[i]>1000000000)
        {
            cout<<"Invalid Input";
            return 0;
        }
    }

    for(int i=0;i<number;i++)
    {
        if(arr[i]==0)
        {
           for(int j=i;j<number;j++)
            {
                if(arr[j]!=0)
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
            }
        }
    }

    for(int i=0;i<number;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nThe Total Digits greater than prior Elements are "<<digitCount;
}

int main()
{
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    ZeroPush(size);

}