#include<iostream>
using namespace std;

int returnPowerValue(int number,int count)
{
    int calculatedValue=1;
    
    if(count==1)
    {
        return 1;
    }
    else
    {
        for(int i=1;i<=count;i++)
        {
            calculatedValue*=number;
        }
        return calculatedValue;
    }
}

int countOfDigits(int number)
{   
    int count=0;
    while(number!=0)
    {
        count++;
        number=number/10;
    }
    return count;
}

int armstrongCalculate(int number)
{   
    if(number<=0||number<=10000)
    {
        cout<<"Invalid Input ";
        return 0;
    }

    int count=countOfDigits(number);
    int digit=0,sum=0;
    int temp=number;
    while(number!=0)
    {
        digit=number%10;
        sum+=returnPowerValue(digit,count);
        number=number/10;
    }
    if(temp==sum)
    {
        cout<<"True ";
    }
    else
    {
        cout<<"False";
    }
}

int main()
{
    int N;

    cout<<"Enter the Number ";
    cin>>N;

    armstrongCalculate(N);
}