//Question 1: Find Missing Number in Array
//Problem Statement
//You are given an arrayA containing N-1 distinct integers. The array contains numbers from
//1 to N with exactly one number missing. Your task is to find the missing number.

#include<iostream>
using namespace std;

int missingNumber(int n)

{
    if(n<2||n>1000000)
    {
        cout<<"Invalid input";
        return 0;
    }

    
    int a[n];
    
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>n||a[n]<1)
        {
            cout<<"Invalid input";
            return 0;
        }
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]==1)
        {
            int start=1;
            for(int j=i;j<n;j++)
            {
                if(a[j]==start)
                {
                    start++;
                }
                else
                {
                    cout<<start;
                    return 0;
                }
            }
        }
    }
}

int main()
{
    
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    missingNumber(size);

}