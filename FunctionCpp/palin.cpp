#include<iostream>
using namespace std;

void palindrome(int number)
{
    int a = number/100;
    int b = (number/10)%10;
    int c = number%10;
    
    int reverse = (c*100)+(b*10)+a;

    if(number==reverse)
    {
        cout<<"palindrome";
    }
    else {
        cout<<"no its not palindrome";
    }
}

int main()
{
  int number;
  cout<<"enter three digit number";
  cin>>number;
  palindrome(number);
}