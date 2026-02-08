#include<iostream>
using namespace std;

int hollowPyramid(int number)
{
    for(int i=number;i>1;i--)
        {
            for(int j=(i-1);j>0;j--)
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
        for(int i=1;i<=number;i++){
            cout<<"*"<<" ";
        }
           
            
        }


int main()
{
  int number;

  cout<<"Enter the number ";
  cin>>number;
  
  hollowPyramid(number);
}