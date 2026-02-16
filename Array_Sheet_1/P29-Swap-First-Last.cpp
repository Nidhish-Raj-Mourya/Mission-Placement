#include<iostream>
using namespace std;

int reverseArrayFirstLast(int number)
{
    int temp=0;
    int arrayOfLength[number];
    int reverse=number-1;

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
    }

    temp=arrayOfLength[0];

    arrayOfLength[0]=arrayOfLength[reverse];
    
    arrayOfLength[reverse]=temp;   
    
    for(int i=0;i<number;i++)
    {
        cout<<arrayOfLength[i];
    }
 
    return 0;
}

int main()
{
    int size,digit;

    cout<<"Enter the size ";
    cin>>size;

    reverseArrayFirstLast(size);

    return 0;

}