#include<iostream>
using namespace std;

int windowSum(int number,int k,int sumToBeCompared)
{

    int count=0;
    int a[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<(number-k)+1;i++)
    {
        int sum=0;
        for(int j=i;j<(i+k);j++)
        {
            sum+=a[j];
        }
        if(sum==sumToBeCompared)
        cout<<"Sum equal  in "<<i+1<<"d window "<<"\n"; 
        count++;
    }

    cout<<"The count is "<<count;
}

int main()
{
    int size,K,sum;

    cout<<"Enter the Size ";
    cin>>size;

    cout<<"Enter the window ";
    cin>>K;

    cout<<"Enter the sum ";
    cin>>sum;

    windowSum(size,K,sum);
}