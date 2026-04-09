#include<iostream>
using namespace std;

int majorityElement(int size)
{

    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element ";
        cin>>arr[i];
    }

    for(int i=0;i<size;i++)
    {
        int count=1;

        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>(size/2))
        {
            cout<<"Element appearing more than n/2 is "<<arr[i]<<"\n";
        }
    }
}
int main()
{
    int size;

    cout<<"Enter the Size of Array ";
    cin>>size;

    majorityElement(size);
}