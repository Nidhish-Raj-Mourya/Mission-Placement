#include<iostream>
using namespace std;

int splitArray(int number)
{
    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter element for array: ";
        cin>>a[i];
    }

    if(number%2==0)
    {
        int split1[number/2];
        int split2[number/2];

        for(int i=0;i<(number/2);i++)
        {
            split1[i]=a[i];
        }

        for(int i=(number/2);i<(number);i++)
        {
            split2[i-(number/2)]=a[i];
        }

        for(int i=0;i<(number/2);i++)
        {
            cout<<split1[i]<<" ";
        }

        cout<<"\n";

        for(int i=0;i<(number/2);i++)
        {
            cout<<split2[i]<<" ";
        }

    } 
    else
    {
        int split1[(number/2)+1];
        int split2[number/2];

        for(int i=0;i<=(number/2);i++)
        {
            split1[i]=a[i];
        }

        for(int i=((number/2)+1);i<(number);i++)
        {
            split2[i-((number/2)+1)]=a[i];
        }

        for(int i=0;i<=(number/2);i++)
        {
            cout<<split1[i]<<" ";
        }

        cout<<"\n";

        for(int i=0;i<(number/2);i++)
        {
           cout<<split2[i]<<" ";
        }

    }

    return 0;
}

int main()
{
    int number;
    
    cout<<"Enter the size ";
    cin>>number;

    splitArray(number);

}