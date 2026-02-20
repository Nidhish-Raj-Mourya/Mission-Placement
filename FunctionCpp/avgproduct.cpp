#include<iostream>
using  namespace std;

int avg(int num)
{
   //return (num/1000 + num%10)/2; //for avg

   return ((num/1000) * ((num/100)%10) * ((num/10)%10) * (num%10));
   //for product of four
}

int main()
{
    int num;
    cout<<"write four digit number :";
    cin>>num;
    cout<<avg(num);
}