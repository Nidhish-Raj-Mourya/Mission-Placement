#include<iostream>
using namespace std;

int perfectNumberChecker(int number)
{
    if(number < 10 || number > 99)
    {
        cout<<" Invalid input ";
         return 0;
    }

    if(number == 16 || number == 25 || number == 36 || number == 49 || number == 64 || number == 81)
    {
        cout<<"Perfect square";
    }
    else
    {
        cout<<"Not perfect square";
    }
}
int main()
{
    int number;
    cout<<"Enter a 2 - digit number : " << endl;
    cin>>number;
    
    perfectNumberChecker(number);
}