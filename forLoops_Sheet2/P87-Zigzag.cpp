#include<iostream>
using namespace std;

int patternZigzag(int number)
{   
    int value=1;
    for(int i=1;i<number;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            cout<<value++<<" ";
        }
        cout<<"\n";
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
    }
}

int main()
{
    int number;

    cout<<"Enter the n th term ";
    cin>>number;

    patternZigzag(number);
}