#include<iostream>
using namespace std;

int automorphicChecker(int number)
{
   return number*number;
}
void displayAutomorphic(int originalNumber , int square)
{
    int extractedDigit = square%100;    //((square/10)%10 *10) + square%10;

    if(extractedDigit == originalNumber)
    {
        cout<<"Automorphic number";
    }
    else
    {
        cout<<"Not Automorphic number";
    }
}
int main()
{
    int number;
    cout<<"Enter a 2 - digit number :" << endl;
    cin>>number;
    
    int square = automorphicChecker(number);
    displayAutomorphic(number,square);
}