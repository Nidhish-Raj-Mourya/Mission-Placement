#include<iostream>
using namespace std;

int tribonacciSeries(int number)
{
    int firstDigit=0,secondDigit=1,thirdDigit=1,fourthDigit;
    
    if(number==1)
    {
    cout<<firstDigit<<endl;
    return 0;
    }

    if(number==2)
    {
    cout<<firstDigit<<" "<<secondDigit<<endl;
    return 0;
    }

    if(number==3)
    {
    cout<<firstDigit<<" "<<secondDigit<<" "<<thirdDigit<<endl;
    return 0;
    }

    for(int i=4;i<=number;i++)
    {   
        if(i==4)
        {
            cout<<firstDigit<<" "<<secondDigit<<" "<<thirdDigit;
        }

        fourthDigit=firstDigit+secondDigit+thirdDigit;
        cout<<" "<<fourthDigit;
        
        firstDigit=secondDigit;
        secondDigit=thirdDigit;
        thirdDigit=fourthDigit;
    }
}

int main()
{
    int nTermth;

    cout<<"Enter the Nth Term : ";
    cin>>nTermth;

    tribonacciSeries(nTermth);

    return 0;
}