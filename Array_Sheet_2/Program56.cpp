
#include<iostream>
using namespace std;

int LongestSequence(int n)

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
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>1000000000||a[n]<-1000000000)
        {
            cout<<"Invalid input";
            return 0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    int max=1;
    for(int i=0;i<n;i++)
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
            }
            while(max<start)
            {
                max=start;
            }

        }

    }
    if(max==1)
    {
        cout<<max;
        return 0;
    }
    cout<<"The longest sequence is "<<max-1;
}

int main()
{
    
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    LongestSequence(size);

}