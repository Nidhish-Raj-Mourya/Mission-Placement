#include<iostream>
using namespace std;

int countOccuranceArray(int number,int searchElement)
{
    int count=0;
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
    }

    for(int i=0;i<number;i++)
    {
        if(arrayOfLength[i]==searchElement)
        {
            count=i+1;
        }
    }

    if(count==0)
    {
        cout<<" it is not present ";
    }
    else
    {
        cout<<"It is last present at "<<count;
    }
    
    return 0;
}

int main()
{
    int size,digit;

    cout<<"Enter the size ";
    cin>>size;

    cout<<"Enter the digit ";
    cin>>digit;

    countOccuranceArray(size,digit);

    return 0;

}