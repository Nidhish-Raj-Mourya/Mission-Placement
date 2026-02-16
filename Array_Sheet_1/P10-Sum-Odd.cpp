#include<iostream>
using namespace std;

int oddSumArray(int number)
{
    int sum=0;
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value ";
        cin>>arrayOfLength[i];
    }
    
    for(int i=0;i<number;i++)
    {
        if(arrayOfLength[i]%2!=0)
        {
            cout<<arrayOfLength[i]<<" ";
            sum+=arrayOfLength[i];
        }
    }


    cout<<"Sum of odd digits are "<<sum<<"\n";
}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    oddSumArray(size);

    return 0;

}