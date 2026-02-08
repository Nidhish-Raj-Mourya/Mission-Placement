#include<iostream>
using namespace std;

int pascalTriangle(int number)
{
    for (int i = 0; i < number; i++)
    {
        for(int j= number;j>i;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    
}
int main()
{
    int number;

    cout<<"Enter the number";
    cin>>number;

    pascalTriangle(number);
}