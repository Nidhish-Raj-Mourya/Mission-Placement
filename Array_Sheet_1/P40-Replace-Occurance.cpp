#include<iostream>
using namespace std;

int replaceOccurance(int number,int element,int element1)
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
            a[i]=element1;
        }
    }

    for(int i=0;i<number;i++)
    {
        cout<<a[i]<<" ";
    }

}

int main()
{
    int size,element,element1;
    
    cout<<"Enter Size ";
    cin>>size;

    cout<<"Enter element to be replaced ";
    cin>>element;

    cout<<"Enter element to beplaced ";
    cin>>element1;
 
    replaceOccurance(size,element,element1);
}