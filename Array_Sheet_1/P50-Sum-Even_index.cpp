#include<iostream>
using namespace std;

int sumEven(int number)
{
    int sum=0;
    int a[number];
    

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element ";
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        if(i%2==0)
        {
            sum+=a[i];
        }
    }

    cout<<"The sum at even index element is  "<<sum;

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;


    sumEven(size);
}