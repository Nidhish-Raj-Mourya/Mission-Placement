#include<iostream>
using namespace std;

int range(int number)
{
    
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the Element "<<i<<" ";
        cin>>a[i];
    }
    int max=a[0],min=a[0];

    for(int i=0;i<number;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"Max is "<<max<<"\nMin is "<<min;
    cout<<"\nRange is "<<(max-min);

}

int main()
{
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    range(size);
}