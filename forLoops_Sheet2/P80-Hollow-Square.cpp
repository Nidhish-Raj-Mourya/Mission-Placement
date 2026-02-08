#include<iostream>
using namespace std;

int hollowSquare(int number)
{
    
    for(int i=1;i<=number;i++)
    {   
        if(i==1||i==number)
        {
            for(int j=1;j<=number;j++)
            {
                cout<<j;
            }
            cout<<"\n";
        }
        else
        {   cout<<"1";
            for(int j=2;j<number;j++)
            {
                cout<<" ";
            }
            cout<<number;
            cout<<"\n";
        }
    }
}

int main()
{   
    int number;

    cout<<"Enter the n term ";
    cin>>number;

    hollowSquare(number);

    return 0;
}