#include<iostream>
using namespace std;

int gcd(int number1,int number2){

    int greatestCommonDivisor=1;

    for(int i=2;i<=number1&&i<=number2;i++)
    {
        while(number1%i==0&&number2%i==0)
        {
            greatestCommonDivisor*=i;
            number1=number1/i;
            number2=number2/i;
        }
    }
    cout<<"the greatest common divisor is "<<greatestCommonDivisor;
}

int main()
{
    int number1,number2;

    cout<<"Enter two numbers ";
    cin>>number1>>number2;

    gcd(number1,number2);
    
    return 0;
}