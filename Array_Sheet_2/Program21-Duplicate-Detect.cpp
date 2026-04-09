#include<iostream>
using namespace std;

int duplicateDetect(int size)
{
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element ";
        cin>>arr[i];
    }

    
    for(int i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout<<arr[i]<<" is duplicate. ";
            break;
        }
        
    }
}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    duplicateDetect(size);
    


}