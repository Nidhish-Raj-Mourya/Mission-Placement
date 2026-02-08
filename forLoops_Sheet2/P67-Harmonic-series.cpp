#include<iostream>
using namespace std;

int harmonicSeries(int number)
{
    float constI=1;
    float sum=0;

    for(int i=1;i<=number;i++)
    {
    sum+=(constI/i);
    }

    cout<<sum<<" ";
    
}

int main()
{
    int nTerm;

    cout<<"Enter the n term";
    cin>>nTerm;

    harmonicSeries(nTerm);

    return 0;
}