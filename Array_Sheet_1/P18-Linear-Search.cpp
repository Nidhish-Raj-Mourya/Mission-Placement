#include<iostream>
using namespace std;

int linearSearchArray(int number,int searchElement)
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
            cout<<"its position is "<<i+1;
            count++;
        }
    }
    if(count==0)
    {
        cout<<"-1 it is not found ";
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

    linearSearchArray(size,digit);

    return 0;

}