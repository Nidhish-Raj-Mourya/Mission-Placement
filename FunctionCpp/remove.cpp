#include<iostream>
using namespace std;

void remove()
{
    int num1 ,num2, number;
    cout<<"enter a third digit number: ";
    cin>>number;
    num1 = number/100;
    num2= (number/10)%10;
    cout<<num1<<num2;
}
int main()
{
    remove();
}