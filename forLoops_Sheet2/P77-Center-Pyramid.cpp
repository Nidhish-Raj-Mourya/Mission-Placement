#include<iostream>
using namespace std;

int centerPyramid(int number)
{   
    for(int i=1;i<number;i++)
        {
            for(int j=number;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
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
    
    centerPyramid(number);

    return 0;
}