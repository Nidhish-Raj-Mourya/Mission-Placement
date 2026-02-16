#include<iostream>
using namespace std;

int averageSmallerElements(int number)
{

    float temp=number;
    int count=0;
    int a[number];
    float sum=0;

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element ";
        cin>>a[i];
        sum+=a[i];
    }

    float average=sum/temp;

    for(int i=0;i<number;i++)
    {
        if(a[i]<average)
        {
            cout<<a[i]<<" ";
            count++;
        }
    }
    
    cout<<"\nAverage is "<<average;
    cout<<"\nCount of element smaller than average is "<<count;

}

int main()
{
    int size,n;

    cout<<"Enter the size ";
    cin>>size;

    averageSmallerElements(size);
}