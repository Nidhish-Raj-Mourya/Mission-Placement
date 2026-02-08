#include<iostream>
using namespace std;

int starTriangle(int number)
{   
    for(int i=1;i<=number;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int number;

    cout<<"Enter the n th term ";
    cin>>number;

    starTriangle(number);
}