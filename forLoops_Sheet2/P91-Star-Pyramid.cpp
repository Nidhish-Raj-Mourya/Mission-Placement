#include<iostream>
using namespace std;

int starPyramid(int number)
{   
    for(int i=1;i<=number;i++)
        {
            for(int j=number;j>=i;j--)
            {
                cout<<" ";
            }
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
    starPyramid(number);

    return 0;
}