#include<iostream>
using namespace std;

int sizeSum(int number,int k)
{
    int temp;
    int a[number];
    int sum=0;

    for(int i=0;i<number;i++)
    {
        cout<<"Entrr the element ";
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        for(int j=i+1;j<number;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }    
    for(int i=0;i<k;i++)
    {
        sum=sum+a[i];
    }

    cout<<"The min sum is "<<sum;
    
}

int main(){
    int size,sizeK;
    
    cout<<"Enter the Size ";
    cin>>size;

    cout<<"Enter the Size of K ";
    cin>>sizeK;

    sizeSum(size,sizeK);
}