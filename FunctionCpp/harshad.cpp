#include<iostream>
using namespace std;

int Harshad(int num)
{
    int digit1 = num / 100;
    int digit2 = (num / 10) % 10;
    int digit3 = num % 10;

    int sum = digit1 + digit2 + digit3;

    return (num % sum == 0);
}

int main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    if(Harshad(num))
        cout << "Harshad Number";
    else
        cout << "Not Harshad Number";

    return 0;
}
