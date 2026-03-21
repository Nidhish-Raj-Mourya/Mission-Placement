//Question 3: Majority Element
//Problem Statement
//You are given an arrayA of N integers. A majority element is an element that appears more
//than N/2 times in the array. Your task is to find the majority element. If no majority element
//exists, return -1.
#include<iostream>
using namespace std;

int majorityElement(int n)

{
    if(n<1||n>100000)
    {
        cout<<"Invalid input";
        return 0;
    }

    
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>1000000000||a[n]<-1000000000)
        {
            cout<<"Invalid input";
            return 0;
        }
    }

    int result=-1;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>(n/2))
        {
            result=a[i];
            break;
        }
    }
    cout<<"Result is "<<result;;
}

int main()
{
    
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    majorityElement(size);

}