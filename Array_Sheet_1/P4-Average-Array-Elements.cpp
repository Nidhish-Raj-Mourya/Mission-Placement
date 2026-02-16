#include<iostream>
using namespace std;

int averageArray(int number)
{
    int sum=0;
    float average=0;
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
        sum=sum+arrayOfLength[i];
    }

    average=(float)sum/number;

    cout<<"Sum is "<<sum;
    cout<<"Average is "<<average;

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    averageArray(size);

    return 0;

}