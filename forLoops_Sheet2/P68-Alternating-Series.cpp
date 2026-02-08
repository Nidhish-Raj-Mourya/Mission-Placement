#include<iostream>
using namespace std;

int sumSeries(int number)
{
    int sum=0;
    int result;
    
    for(int i=0;i<=number;i++)
    {
        if(i%2==0)
        {
            sum-=i;
        }
        else
        {
            sum+=i;
        }
    }
    cout<<"Sum is "<<sum;
}

int main()
{
    int number;

    cout<<"Enter the n th term";
    cin>>number;

    sumSeries(number);

    return 0;
}