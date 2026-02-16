#include<iostream>
using namespace std;

int lessThanXArray(int number,int element)
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
        if(arrayOfLength[i]<element)
        {
            count++;
        }
    }

    cout<<"No. of digits less than "<<element<<" are "<<count<<"\n";

}

int main()
{
    int size,element;

    cout<<"Enter the size ";
    cin>>size;
    cout<<"Enter the element";
    cin>>element;

    lessThanXArray(size,element);

    return 0;

}