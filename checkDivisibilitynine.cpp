#include<iostream>
using namespace std;

void checkDivisibility(int number)
{
    if(number >= 100 && number <= 999)
    {
        if(number%9 ==0)
        {
            cout<<"Yes";
        }
        else 
        {
            cout<<"No";
        }
    }
    else{
        cout<<"Please enter a valid digit ";
    }
}
int main()
{
    int number;
    cout<<"Enter a three digit number :"<<endl;
    cin>>number;
    checkDivisibility(number);
    return 0;
}