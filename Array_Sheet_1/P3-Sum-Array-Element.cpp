#include<iostream>
using namespace std;

int sumArray(int number)
{
    int sum=0;
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
        sum=sum+arrayOfLength[i];
    }

    cout<<"Sum is "<<sum;

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    sumArray(size);

    return 0;

}