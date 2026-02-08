#include<iostream>
using namespace std;

int invertedPyramid(int number)
{   
    for(int i=number;i>0;i--)
        {
            for(int j=i;j<number;j++)
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
    invertedPyramid(number);

    return 0;
}