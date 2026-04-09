#include<iostream>
using namespace std;

 int insertPlaceInArray(int a[],int size,int element,int low,int high)
 {
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]>element)
        {
            cout<<i-1<<" place according to array position";
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
    int element;
    int low=0,high=size-1;
    
    cout<<"Enter the search element ";
    cin>>element;

    insertPlaceInArray(a,size,element,low,high);

}