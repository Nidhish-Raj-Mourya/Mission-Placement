#include<iostream>
using namespace std;

int digitalRootCalculator(int number)
{
    int digitalRoot = 1 + (number - 1) % 9;
    cout<<digitalRoot;
}
int main()
{
    int number;
    cout<<"Enter a 4 - digit number : " << endl;
    cin>>number;

    digitalRootCalculator(number);
}