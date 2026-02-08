#include<iostream>
using namespace std;

int binaryPattern(int number)
{
    for(int i=1;i<number;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
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

    binaryPattern(number);
}