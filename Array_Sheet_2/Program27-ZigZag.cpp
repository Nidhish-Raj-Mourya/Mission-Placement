#include<iostream>
using namespace std;

int zigzagPattern(int num)
{

    int count=0;
    int a[num];

    for(int i=0;i<num;i++)
    {
        cout<<"Enter Value ";
        cin>>a[i];
    }

    int limit=(num/3)*3;

    for(int i=0;i<limit;i=i+3)
    {
        if(count%2==0)
        {
            for(int j=i;j<i+3;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        int temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            int temp=a[i+1];
            a[i+1]=a[i+2];
            a[i+2]=temp;
        }
        else
        {
            for(int j=i;j<i+3;j++)
            {
                if(a[j]<a[j+1])
                    {
                        int temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            int temp=a[i+1];
            a[i+1]=a[i+2];
            a[i+2]=temp;
        }
        count++;
    }

    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main()
{
    int num;
    cout<<"Enter the Size ";
    cin>>num;

    zigzagPattern(num);

}