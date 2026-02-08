#include<iostream>
using namespace std;

int palindromeNumberPattern(int number)
{
    int j=0;
    for(int i=1;i<number;i++)
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

    }
}
int main()
{   int number;

    cout<<"Enter the n term ";
    cin>>number;

    palindromeNumberPattern(number);
}