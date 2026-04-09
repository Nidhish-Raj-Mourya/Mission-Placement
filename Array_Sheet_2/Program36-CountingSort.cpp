#include<iostream>
using namespace std;

int countingSort(int n)
{
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    int maxArray[max+1] = {0};

    int empty=max;
    while(empty>=0)
    {
        maxArray[empty]=0;
        empty--;
    }
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
        
            if(a[i]==a[j])
            {
            count++;
            }
        } 
        maxArray[a[i]]=count;
    }

    for(int i=1;i<n;i++)
    {
        maxArray[i]=maxArray[i]+maxArray[i-1];
    }
    

    int answer[n]={0};
    for(int i=0;i<n;i++)
    {
        answer[maxArray[a[i]]-1]=a[i];
        maxArray[a[i]]--;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<answer[i]<<" ";
    }
}

int main()
{
    int size;

    cout<<"Enter the size of array ";
    cin>>size;

    countingSort(size);
}