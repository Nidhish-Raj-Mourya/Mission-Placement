#include<iostream>
using namespace std;

int removeOccurance(int number,int element)
{
    int count=0;
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter Elements in array ";
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        if(a[i]==element)
        {
            a[i]=0;
        }
    }

    for(int i=0;i<number;i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    int size,element,place;
    
    cout<<"Enter Size ";
    cin>>size;

    cout<<"Enter element ";
    cin>>element;

    

    removeOccurance(size,element);
}