#include<iostream>
using namespace std;

int sumfunc(int number)
{
    int digit=0;
    int sum=0;

    while(number!=0)
    {
        digit=number%10;
        sum+=digit;
        number=number/10;
    }

    return sum;
}
int productfunc(int number)
{
    int digit=0;
    int product=0;

    while(number!=0)
    {
        digit=number%10;
        product*=digit;
        number=number/10;
    }

    return product;
}

int compute(int number)
{
    int sum=sumfunc(number);
    int product= productfunc(number);
    
    if(sum+product==number)
    {
        cout<<"it is a special number ";
    }
    else
    {
        cout<<"it is not a special number ";
    }
}

int main()
{
    int number;

    cout<<"enter the number ";
    cin>>number;

    compute(number);

    return 0;
}