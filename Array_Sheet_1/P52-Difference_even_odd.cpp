#include<iostream>
using namespace std;

int differenceEvenOdd(int number)
{
    int sumOdd=0,sumEven=0;
    int a[number];
    

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element ";
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        if(i%2!=0)
        {
            sumOdd+=a[i];
        }
        else
        {
            sumEven+=a[i];
        }
    }

    cout<<"The sum at Even index element is  "<<sumEven<<"\n";
    cout<<"The sum at Odd index element is  "<<sumOdd<<"\n";
    cout<<"The Difference between even and odd index is "<<(sumEven-sumOdd);

}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;


    differenceEvenOdd(size);
}