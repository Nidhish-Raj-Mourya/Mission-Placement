#include<iostream>
using namespace std;

int butterflyPattern(int number)
{   int half=(number/2)+1;
    for(int i=1;i<half;i++)
        {
            for(int j=half;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {
                if(j==i){
                    cout<<"*";
                }
                else{
                cout<<"*"<<" ";
                }
            }
            for(int j=half;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=half;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {
                if(j==i){
                    cout<<"*";
                }
                else{
                cout<<"*"<<" ";
                }
            }
            cout<<"\n";
        }
    
    for(int i=half;i>0;i--)
        {
            for(int j=half;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {   
                if(j==i){
                    cout<<"*";
                }
                else
            {
                cout<<"*"<<" ";
            }
            }
            
            for(int j=half;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=half;j>i;j--)
            {
                cout<<" ";
            }
            for(int j=1;j<=i;j++)
            {   
                if(j==i){
                    cout<<"*";
                }
                else
            {
                cout<<"*"<<" ";
            }
            }
            
            cout<<"\n";
        }
}

int main()
{
    int number;

     cout<<"Enter the n th term ";
    cin>>number;
    butterflyPattern(number);

    return 0;
}