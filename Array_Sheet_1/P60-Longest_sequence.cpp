#include<iostream>
using namespace std;

int LongestSequence(int number)
{
    int finalCount=0;
    int count;
    int a[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        if(a[i]==1)
        {
            count=1;
            int num=2;
            for(int j=i+1;j<number;j++)
            {
                if(a[j]==num++)
                {
                   count++; 
                }
            }
        }
        if(finalCount<count)
        {
            finalCount=count;
        }
    }
    cout<<"The maximum longest sequence is "<<finalCount;
}

int main()
{
    int size;

    cout<<"Enter Size ";
    cin>>size;

    LongestSequence(size);
}