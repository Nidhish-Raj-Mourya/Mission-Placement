#include<iostream>
using namespace std;

int trimorphicChecker(int number)
{
   return number*number*number;
}
void displaytrimorphic(int originalNumber , int cube)
{
    int extractedDigit = cube%100;    

    if(extractedDigit == originalNumber)
    {
        cout<<"Trimorphic number";
    }
    else
    {
        cout<<"Not Trimorphic number";
    }
}
int main()
{
    int number;
    cout<<"Enter a 2 - digit number :" << endl;
    cin>>number;
    
    int cube = trimorphicChecker(number);
    displaytrimorphic(number,cube);
}