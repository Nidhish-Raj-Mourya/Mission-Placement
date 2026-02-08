#include<iostream>
using namespace std;

int invertedStarTriangle(int number)
{   
    int value=1;
    for(int i=number;i>0;i--)
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

    invertedStarTriangle(number);
}