#include<iostream>
using namespace std;

int missingNumberDetect(int size)
{
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element ";
        cin>>arr[i];
    }

    int digit=1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=digit)
        {
            cout<<digit<<"is missing.";
            break;
        }
        else
        {
            digit++;
        }
    }
}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    missingNumberDetect(size);
    


}