#include<iostream>
using namespace std;
int pronicNumber(int number){
    if(number==2||number==6||number==12||number==20||number==30||number==42||number==56||number==72||number==90)
{
    cout<<"it is pronic";
}
else
{
    cout<<"it is not pronic";
}
}
int main()
{
    int number;
    cout<<"enter number ";
    cin>>number;
    pronicNumber(number);
}