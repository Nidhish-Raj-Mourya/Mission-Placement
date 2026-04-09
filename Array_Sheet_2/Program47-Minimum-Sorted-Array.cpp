#include<iostream>
using namespace std;

 int minimumElementRotatedSortedArray(int a[],int size,int element,int low,int high)
 {
    int result=-1;
    for(int i=0;i<size;i++)
    {
        if(a[i]>a[i+1])
        {
            cout<<a[i+1];
            break;
        }
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
        cout<<"ENter element ";
        cin>>a[i];
    }
    int low=0,high=size-1;
    
    minimumElementRotatedSortedArray(a,size,element,low,high);

}