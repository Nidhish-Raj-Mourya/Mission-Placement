#include<iostream>
using namespace std;

int reverseArray(int number)
{
    int temp=0;
    int arrayOfLength[number];
    int reverse=number-1;

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
    }
    if (number%2==0)
    {
        for(int i=0;i<(number/2);i++)
        {
            temp=arrayOfLength[i];
            arrayOfLength[i]=arrayOfLength[reverse];
            arrayOfLength[reverse]=temp;
            reverse--;
        }
        
    }
    else
    {
        for(int i=0;i<=(number/2);i++)
        {
            temp=arrayOfLength[i];
            arrayOfLength[i]=arrayOfLength[reverse];
            arrayOfLength[reverse]=temp;
            reverse--;
        }
    }
    
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

    reverseArray(size);

    return 0;

}