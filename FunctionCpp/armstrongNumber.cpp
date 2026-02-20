#include<iostream>
using namespace std;

int extractDigit(int number)
{ 
    int first = number/100;
    int middle = (number/10)%10;
    int last = number%10;

   int  sum = first*first*first + middle*middle*middle + last*last*last ;
    return sum ;
}
void displayArmstrong(int original , int sum)
{
    if( sum == original)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not armstrong number";
    }
}
int main()
{
   int number;
   cout<<"Enter a 3 - digit number : " << endl;
   cin>>number;

   if(number < 100 || number > 999)
    {
        cout<<" Invalid input ";
        return 0;
    }
   
   int result = extractDigit(number);
   displayArmstrong(number ,result);

}