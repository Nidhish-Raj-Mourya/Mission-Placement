#include<iostream>
using namespace std;

int invertedPyramid(int number)
{
    for(int i=0;i<number;i++)
        {    if(i==0){
            cout<<" ";
            for(int j=0;j<number;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<"\n";
        }
        else{
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
            } }           
       
           
            
        }


int main()
{
  int number;
  cout<<"Enter the number ";
  cin>>number;
  invertedPyramid(number);
}