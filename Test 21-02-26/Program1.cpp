#include<iostream>
using namespace std;

int DigitsProduct(int number)
{
    if(number<0 || number>=1000000000)
    {
        cout<<"Invalid Input";
        return 0;
    }

    int temp=number;
    int digit=0,product=1;

    while(temp!=0)
    {
        digit=temp%10;
        product*=digit;
        temp=temp/10;
    }
    cout<<product;
    return product;
}

int main()
{
    int number;

    cout<<"Enter the number ";
    cin>>number;

    DigitsProduct(number);
}