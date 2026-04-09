#include<iostream>
using namespace std;

int twoNumberMissingDetect(int size)
{
    int arr[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element ";
        cin>>arr[i];
    }

    int count=0;
    int digit=1;
    for(int i=0;i<size;i++)
    {
         if(arr[i]!=digit)
        {
            cout<<digit<<"is missing.";
            count++;
            digit++;
            i--;
        }
        else
        {
            digit++;
        }
        
        if(count==2)
        {
            break;
        }
    }
}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    twoNumberMissingDetect(size);
    


}