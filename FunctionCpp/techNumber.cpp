#include<iostream>
using namespace std;

int techNumberChecker(int number)
{
    int originalNumber = number;

    int digitFirst = (number/1000)*10 + (number/100)%10;
    int digitSecond = ((number/10)%10)*10 + number%10;

    int sum = (digitFirst + digitSecond) * (digitFirst + digitSecond);

    if(sum == originalNumber)
    {
        cout<<"Tech Number ";
    }
    else
    {
        cout<<"Not tech number";
    }
    return 0;
}
int main()
{
    int number;
    cout<<"Enter a 4 - digit number :" << endl;
    cin>>number;

    if(number > 10000 || number < 1000)
    {
        cout<<"Invalid input";
    }

    techNumberChecker(number);
}