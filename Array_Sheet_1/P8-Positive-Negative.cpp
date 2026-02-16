#include<iostream>
using namespace std;

int positiveNegativeArray(int number)
{
    int positiveCount=0,negativeCount=0,zeroCount=0;
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];

        if(arrayOfLength[i]==0)
        {
            zeroCount++;
        }

        else if(arrayOfLength[i]>0)
        {
            positiveCount++;
        }
        
        else
        {
            negativeCount++;
        }
    }

    cout<<"No. of positive digits are "<<positiveCount<<"\n";
    cout<<"No. of negative digits are "<<negativeCount<<"\n";
    cout<<"No. of zero digits are "<<zeroCount;


}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    positiveNegativeArray(size);

    return 0;

}