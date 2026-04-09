#include<iostream>
using namespace std;

int kadene(int number,int k,int sumToBeCompared)
{

    int maxSum=0;
    int a[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<(number);i++)
    {
        int sum=0;
        for(int j=i;j<(number);j++)
        {
            
            sum+=a[j];
            if(maxSum<sum)
                {
                    maxSum=sum;
                }
            
        }
    }
    cout<<"The MaxSum is "<<maxSum;

   
}

int main()
{
    int size,K,sum;

    cout<<"Enter the Size ";
    cin>>size;

    cout<<"Enter the sum ";
    cin>>sum;

    kadene(size,K,sum);
}