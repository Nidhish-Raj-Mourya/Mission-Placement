#include<iostream>
using namespace std;
int main(){
    int number, firstDigit, secondDigit, reverse;
    cout<<"Number:";
    cin>>number;
        firstDigit = number /10;
        secondDigit = number % 10;
    reverse = (secondDigit * 10) + firstDigit;
    
    if(number == reverse)
    {cout <<"Palandrom:"<<number;}
    else
    {cout<<"Not Plandrom:"<<number<<endl;}
     return 0;

}