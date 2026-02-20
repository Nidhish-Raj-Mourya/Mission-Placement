#include<iostream>
using namespace std;

int sunnyNumberChecker(int number)
{
    int N = number + 1;

    if(N == 1 || N == 4 || N == 9 || N == 16 || N == 25 || N == 36 || N == 49 || N == 64 || N == 81 || N == 100)
    {
        cout<<"Sunny number";
    }
    else
    {
        cout<<"Not Sunny number";
    }
    return 0;
}
int main()
{
    int number;
    cout<<"Enter a number : " << endl;
    cin>>number;
    
    if(number < 0 || number > 100)
    {
        cout<<"Invalid input";
        return 0;
    }
    
    sunnyNumberChecker(number);
}