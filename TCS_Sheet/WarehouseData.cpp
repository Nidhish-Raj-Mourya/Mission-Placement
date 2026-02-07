#include<iostream>
using namespace std;

int divisiblebyNine(int number)
{ 
  if(100<=number && number<=999)
  {
    if(number%9==0)
    {
        cout<<"Yes, It is divisible by 9";
    }
    else
    {
        cout<<"No, It is not divisible by 9";
    }
  }
  else
  {
    cout<<"It is not a three Digit Number ";
    return 0;
  }

}

int main()
{
    int num;

    cout<<"Enter the number ";
    cin>>num;

    divisiblebyNine(num);
    return 0;
}