#include<iostream>
using namespace std;

int squareNumber(int number)
{
    return number*number;
}

int addDigits(int number)
{
    int last = number%10;
    int first = number/10;
    return last + first;
}

void displayNeon(int originalNumber , int sum)
{
     if(sum == originalNumber)
        cout << "Neon Number";
    else
        cout << "Not Neon Number";
}

int main()
{
    int number;
    cout << "Enter single digit: ";
    cin >> number;

    int storeSquare = squareNumber(number);
    int result = addDigits(storeSquare);
    displayNeon(number , result);
}
