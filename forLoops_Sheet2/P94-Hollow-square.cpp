#include<iostream>
using namespace std;


int hollowSquareStar(int number)
{
    
    for(int i=1;i<=number;i++)
    {   
        if(i==1||i==number)
        {
            for(int j=1;j<=number;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        else
        {   cout<<"*";
            for(int j=2;j<number;j++)
            {
                cout<<" ";
            }
            cout<<"*";
            cout<<"\n";
        }
    }
}
int main()
{   int number;

    cout<<"Enter the n term ";
    cin>>number;

    hollowSquareStar(number);
}