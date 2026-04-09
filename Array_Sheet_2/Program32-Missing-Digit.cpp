#include<iostream>
using namespace std;

int arraySort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a[n];
}

int missingDigit(int n)
{
    int a[n];

    for(int i=0;i<n;i++)
    {
        cout<<"ENter the element ";
        cin>>a[i];
    }

    a[n]=arraySort(a,n);

    int max=a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]==(--max))
        {
            continue;
        }
        else
        {
            cout<<"Missing Digit is "<<max;
        }
    }

   

}
int main()
{
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    missingDigit(size);
}