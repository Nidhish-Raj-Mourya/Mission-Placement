#include<iostream>
using namespace std;

int productArray(int a[],int size)
{
    int array2[size];
    for(int i=0;i<size;i++)
    {
        int product=1;
        for(int j=0;j<size;j++)
        {
            if(a[i]==a[j])
            {
                continue;
            }
            else
            {
                product*=a[j];
            }
        }
        array2[i]=product;
    }
    for(int i=0;i<size;i++)
    {
        cout<<array2[i]<<" ";
    }

}
int main()
{
    int size;
    cout<<"Enter the Size ";
    cin>>size;

    int a[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter element ";
        cin>>a[i];
    }
    productArray(a,size);

}