#include<iostream>
using namespace std;

int arrayFunc(int number)
{
    int temp=number-1;
    int count=0;
    int a[number];

    if(number==1)
    {
        cout<<"Not Palindrome ";
        return 0;
    }
    
    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element ";
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        if(a[i]==a[temp])
        {
            temp--;
        }
        else
        {
            count=1;
        }
    }
    if(count==0)
    {
        cout<<"Palindrome ";
    }
    else
    {
        cout<<"Not Palindrome ";
    }
    
}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    arrayFunc(size);
}