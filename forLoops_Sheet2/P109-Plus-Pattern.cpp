#include<iostream>
using namespace std;
int plusPattern(int number)
{
    for(int i=0;i<number;i++)
    {
        for(int j=0;j<number;j++)
        {
            
                if(i==(number/2)||j==(number/2))
                {
                    cout<<"*"<<" ";
                }
                else
                {
                    cout<<"  ";
                }
                
            
        }
        cout<<"\n";
    }
}



int main()
{
    int number;

    cout<<"Enter the number";
    cin>>number;

    plusPattern(number);
}