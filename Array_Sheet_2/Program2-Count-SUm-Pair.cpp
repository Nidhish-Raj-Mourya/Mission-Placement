#include<iostream>
using namespace std;

int countSizeSum(int number,int sumElement)
{

    int count=0;
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Entrr the element ";
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        for(int j=0;j<number;j++)
        {
            if(a[i]+a[j]==sumElement)
            {
                cout<<a[i]<<" "<<a[j]<<"\n";
                count++;
            }
        }
    }
    cout<<"The count of total Pair is "<<count;
}

int main(){
    int size,sum;
    
    cout<<"Enter the Size ";
    cin>>size;

    cout<<"Enter the Sum element ";
    cin>>sum;

    countSizeSum(size,sum);
}