#include<iostream>
using namespace std;

int productArray(int number)
{
    int product=1;
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
        product*=arrayOfLength[i];
    }

    cout<<"Product is "<<product;

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    productArray(size);

    return 0;

}