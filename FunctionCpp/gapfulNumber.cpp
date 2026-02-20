#include<iostream>
using namespace std;

int gapfulNumberChecker(int number)
{
    int originalNumber = number;

    int digit = (number/100) * 10 +  number%10;
    
    if(originalNumber % digit == 0)
    {
        cout<<"Gapful Number";
    }
    else
    {
        cout<<"Not a gapful number";
    }
    return 0;
}
int main()
{
    int number;
    cout<<"Enter a 3 - digit number :";
    cin>>number;

    if(number >= 999 || number < 100)
    {
       cout<<"Invalid input";
       return 0;
    }

    gapfulNumberChecker(number);
}