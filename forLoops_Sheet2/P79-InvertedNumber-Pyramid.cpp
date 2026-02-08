#include<iostream>
using namespace std;

int InvertedPyramid(int number)
{   
    for(int i=number;i>0;i--)
        {
            for(int j=i;j<number;j++)
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
    
    InvertedPyramid(number);

    return 0;
}