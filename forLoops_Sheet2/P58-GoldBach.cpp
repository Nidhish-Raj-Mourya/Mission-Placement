#include<iostream>
using namespace std;

int Prime(int number)
{
    int count=0;

    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }

    if(count==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int goldBach(int number)
{
    for(int i=2;i<number;i++)
    {
        for(int j=2;j<number;j++)
        {
        if(i+j==number)
            {
                if(Prime(i)&&Prime(j))
                {
                    cout<<"it can be expressed in the sum of "<<i<<" and "<<j<<"\n";
                }
            }
        }
    }
}

int main()
{
    int number;

    cout<<"Enter the number ";
    cin>>number;

    goldBach(number);

    return 0;
}