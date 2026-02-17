#include<iostream>
using namespace std;
int replaceOccurenceDigit(int oldDigit, int newDigit, int number)
{       
    int place = 1;
    int digit;
    int result = 0;
    while(number != 0)
    {
         digit = number % 10;
        if(digit == oldDigit){
           digit = newDigit;
        }
      result = result + digit * place;
      place = place * 10;
      number = number / 10;
        
    }
    cout<<result<<endl;
    return 0;
}
int main(){
    int oldDigit,newDigit,number;
    cout<<"Enter a number ";
    cin>>number;
    cout<<"Enter Old number ";
    cin>>oldDigit;
    cout<<"Enter a New digit ";
    cin>>newDigit;
    replaceOccurenceDigit(oldDigit, newDigit, number);
    return 0;
}