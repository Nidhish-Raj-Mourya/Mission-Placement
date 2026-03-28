#include<iostream>
using namespace std;

int reverse(int num)
{
    return (num%10)*100 +(num/10)%10*10 + num/100; 
}



int main()
{
    int num;
    cout<<"input three digit number :";
    cin>>num;
    cout<<reverse(num);
}