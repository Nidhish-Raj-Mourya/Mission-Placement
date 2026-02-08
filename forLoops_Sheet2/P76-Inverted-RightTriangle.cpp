#include<iostream>
using namespace std;

int invertedTriangle(int number)
{   
    int value=1;
    for(int i=number;i>1;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int number;

    cout<<"Enter the n th term ";
    cin>>number;

    invertedTriangle(number);
}