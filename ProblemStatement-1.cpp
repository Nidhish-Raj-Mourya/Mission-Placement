#include <iostream>
using namespace std;

int main()
{
    int n;
    int product = 1;
    int digit;

    cout<<"Enter the product code (n): ";
    cin>>n;

    while (n>0)
    {
        digit = n%10; // show the last digit
        product = product*digit; // multipling the digit
        n = n/10; // removing the last digit
    }
    cout << "Price of the item: "<< product;

    return 0;
}