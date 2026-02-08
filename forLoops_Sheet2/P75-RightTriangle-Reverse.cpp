#include<iostream>
using namespace std;

int rightTriangleReverse(int number)
{   
    int value=1;
    
    for(int i=1;i<number;i++)
    {
        for(int j=i;j>0;j--)
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

    rightTriangleReverse(number);

    return 0;
}