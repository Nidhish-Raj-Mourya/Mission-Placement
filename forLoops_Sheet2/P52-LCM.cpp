#include<iostream>
using namespace std;

int lcm(int number1,int number2){

    int temp1=number1;
    int temp2=number2;
    int lcm=1;
    int gcd=1;

    for(int i=2;i<=number1&&i<=number2;i++)
    {
        while(number1%i==0&&number2%i==0)
        {
        gcd*=i;
        number1=number1/i;
        number2=number2/i;
        }
    lcm=(temp1*temp2)/gcd;
    }

    cout<<"The LCM is "<<lcm;
}

int main()
{
    int number1,number2;

    cout<<"Enter two numbers ";
    cin>>number1>>number2;

    lcm(number1,number2);
    
    return 0;
}