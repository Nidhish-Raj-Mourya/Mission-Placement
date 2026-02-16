#include<iostream>
using namespace std;

int SwapPlaces(int number,int place1,int place2)
{
    
    int arrayOfLength[number];
    int temp=0;

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
    }
    
    temp=arrayOfLength[place1];

    arrayOfLength[place1]=arrayOfLength[place2];
    
    arrayOfLength[place2]=temp;

    for(int i=0;i<number;i++)
    {
        cout<<arrayOfLength[i];
    }
 
    return 0;
}

int main()
{
    int size,place1,place2;

    cout<<"Enter the size ";
    cin>>size;

    cout<<"Enter places to change ";
    cin>>place1>>place2;

    SwapPlaces(size,place1-1,place2-1);

    return 0;

}