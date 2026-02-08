#include<iostream>
using namespace std;

int crossPattern(int number)
{
    for(int i=0;i<number;i++)
        { 
            for(int j=0;j<=i;j++)
            {
                cout<<" ";
            }
            for(int j=(number-1);j>=i;j--)
            {
                if(j==(number-1)||j==(i))
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
    for(int i=number;i>=1;i--)
        {
            for(int j=i;j>0;j--)
            {
                cout<<" ";
            }
            for(int j=(i-1);j<number;j++)
            {
                if(j==(i-1)||j==(number-1))
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
  cout<<"Enter the number ";
  cin>>number;
  crossPattern(number);
}