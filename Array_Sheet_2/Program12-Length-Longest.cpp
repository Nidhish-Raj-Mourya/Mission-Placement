#include<iostream>
using namespace std;

int windowSum(int number,int k,int sumToBeCompared)
{

    int longest=0;
    int a[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<(number);i++)
    {
        int sum=0;
        sum+=a[i];
        int count=0;
        for(int j=i+1;j<(number);j++)
        {
            count++;
            sum+=a[j];
            if(sum==sumToBeCompared)
            {
                cout<<"Sum equal  in "<<i+1<<"d window in range "<<i<<" "<<i+count<<"\n"; 

                if(longest<(count+1))
                {
                    longest=count+1;
                }
            }
        }
    }
    cout<<"The longest length is "<<longest;

   
}

int main()
{
    int size,K,sum;

    cout<<"Enter the Size ";
    cin>>size;

    cout<<"Enter the sum ";
    cin>>sum;

    windowSum(size,K,sum);
}