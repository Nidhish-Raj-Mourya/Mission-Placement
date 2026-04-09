#include<iostream>
using namespace std;

int equilibriumIndex(int number)
{

    int a[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<(number);i++)
    {
        int leftSum=0;
        int rightSum=0;

        for(int j=0;j<i;j++)
        {
            leftSum+=a[j];
        }

        for(int j=i+1;j<number;j++)
        {
            rightSum+=a[j];
        }

        if(leftSum==rightSum)
        {
            cout<<"Equilibrium index is "<<i<<" at element "<<a[i];
        }
    }
}

int main()
{
    int size,K,sum;

    cout<<"Enter the Size ";
    cin>>size;

    equilibriumIndex(size);
}