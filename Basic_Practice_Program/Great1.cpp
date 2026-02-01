#include<iostream>
using namespace std;
int main(){
    int number,firstDigit,secondDigit,thirdDigit,fourthDigit,Greatest;
    cout<<"Enter Number";
    cin>>number;
    firstDigit=number/1000;
    number=number%1000;
    secondDigit=number/100;
    number=number%100;
    thirdDigit=number/10;
    fourthDigit=number%10;
    if(firstDigit>secondDigit)
    {
       if(firstDigit>thirdDigit)
       {
         if(firstDigit>fourthDigit)
         {
         Greatest=firstDigit;
         }
         else
         {
         Greatest=fourthDigit;
         }
       }
       else if(thirdDigit>fourthDigit)
         {
          Greatest=thirdDigit;
         }
         else
         { 
          Greatest=fourthDigit;
         }
    }
    else
    {
        if(secondDigit>thirdDigit)
        {   if(secondDigit>fourthDigit)
            {
            Greatest=secondDigit;
            }
            else
            {
            Greatest=fourthDigit;
            }
           
            
        }
        else
        {    if(thirdDigit>fourthDigit)
            {
            Greatest=thirdDigit;
            }
            else
            {
            Greatest=fourthDigit;
            }
            

        }
    }
    cout<<"The greatest is "<<Greatest;
}