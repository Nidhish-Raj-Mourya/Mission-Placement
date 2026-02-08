#include<iostream>
using namespace std;

int reversePalindromeNumberPattern(int number)
{
    int j=0;
    for(int i=number;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=(i-1);j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
        for(int j=i-1;j<number;j++)
        {
            cout<<" ";
        }
        
    }
}
int main()
{   int number;

    cout<<"Enter the n term ";
    cin>>number;

    reversePalindromeNumberPattern(number);
}