#include<iostream>
using namespace std;

int greaterThanRightIndex(int number)
{

    int a[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=number-1;i>=0;i--)
    {
        int count=0;
        for(int j=i+1;j<number;j++)
        {
            if(a[i]<a[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<"Element is "<<a[i]<<" \n";
        }
    }
}

int main()
{
    int size,K,sum;

    cout<<"Enter the Size ";
    cin>>size;

    greaterThanRightIndex(size);
}