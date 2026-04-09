#include<iostream>
using namespace std;

 int CountRotation(int a[],int size,int low,int high)
 {
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>a[i+1])
        {
            break;
        }
        else
        {
            count++;
        }
    }
    cout<<"Array has been rotated "<<count+1<<" times.";
 }
int main()
{
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    int a[size];
    for(int i=0;i<size;i++)
    {
        cout<<"ENter element ";
        cin>>a[i];
    }
    int low=0,high=size-1;
    
    CountRotation(a,size,low,high);

}