#include<iostream>
using namespace std;

int positionArray(int number,int searchElement)
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
        {   count++;
            cout<<"Found "<<arrayOfLength[i]<<" its position is "<<(i+1)<<"\n";
        }
    }

    if(count==0)
    {
        cout<<"Not Found ";
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

    positionArray(size,digit);

    return 0;

}