#include<iostream>
using namespace std;

int duplicateArray(int number)
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
        for(int j=i+1;j<number;j++)
        {
            if(arrayOfLength[i]==arrayOfLength[j])
            {
                cout<<"Yes "<< i+1<<" is appearing more than once "<<" \n";
                count++;
            }
        }
    }

    if(count==0)
    {
        cout<<"No element has not appeared more than once"<<" ";
    }

    return 0;
}

int main()
{
    int size,digit;

    cout<<"Enter the size ";
    cin>>size;

    duplicateArray(size);

    return 0;

}