#include<iostream>
using namespace std;

int pronicNumberChecker(int number)
{
    if(number == 12 || number == 20 || number == 30 ||
       number == 42 || number == 56 || number == 72 ||
       number == 90)
    {
        cout << "Pronic Number";
    }
    else
    {
        cout << "Not Pronic Number";
    }
return 0;
}
int main()
{
    int number;
    cout << "Enter a 2-digit number: ";
    cin >> number;

    pronicNumberChecker(number);
}
