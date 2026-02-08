#include<iostream>
using namespace std;

int rhombusPattern(int number)
{
    for(int i=number;i>0;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<number;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }

}
int main()
{   
    int number;
    
    cout<<"Enter the n term ";
    cin>>number;

    rhombusPattern(number);
}