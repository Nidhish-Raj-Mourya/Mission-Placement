#include<iostream>
using namespace std;

int sumOfDigits(int number)
{
    int temp=number;
    int digit=0,sum=0;

    while(temp!=0)
    {
        digit=temp%10;
        sum+=digit;
        temp=temp/10;
    }
    return sum;
}

int rTimesExecute(int number,int r)
{
    if(number<0 || number>=1000 || r<=0 || r>=50 )
    {
        cout<<"Invalid Input";
        return 0;
    }
    int sum=0;
    for(int i=1;i<=r;i++)
    {   
        sum+=sumOfDigits(number);
    }

    while(sum>9)
    {
    sum=sumOfDigits(sum);
    }

    cout<<"The single Digit is "<<sum;
    
}
int main(){
    int number,r;

    cout<<"Enter the number ";
    cin>>number;
    cout<<"Enter the R value";
    cin>>r;

    rTimesExecute(number,r);
}

