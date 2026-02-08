#include<iostream>
using namespace std;

int hollowRhombusPattern(int number)
{
    for(int i=number;i>0;i--)
    {   
        
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        if(i==1||i==number)
        {
            for(int j=1;j<=number;j++)
            {
                cout<<"*"<<" ";
            }
        }
        else
        {
            for(int j=1;j<=number;j++)
            {  
                if(j==1||j==number)
                {
                    cout<<"*"<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<"\n";
    }

}
int main()
{   
    int number;
    
    cout<<"Enter the n term ";
    cin>>number;

    hollowRhombusPattern(number);
}