#include<iostream>
using namespace std;

int magicNumberGenerator(int number)
{
    int firstA = number/10;
    int lastA = number%10;

    int magicNumber = (firstA * 10 + lastA) * 101;
    cout<<"Magic number is = " <<magicNumber;

    return magicNumber;
}
int main()
{
    int number;
    cout<<"Enter a 2 - digit number :" << endl;
    cin>>number;

    if(number > 99 || number < 9)
    {
        cout<<"Invalid number";
        return 0;
    }

    magicNumberGenerator(number);
}