#include<iostream>
using namespace std;
int digitFrequency(int number){
    int countOfFive=0,countOfZero=0,countOfNine=0;
    int digit=number%10;
    if(digit==5)
    {
        countOfFive++;
    }
    else if(digit==0)
    {
        countOfZero++; 
    }
    else if(digit==9)
    {
        countOfNine++;
    }
    //second digit
    number=number/10;
    digit=number%10;
    if(digit==5)
    {
        countOfFive++;
    }
    else if(digit==0)
    {
        countOfZero++; 
    }
    else if(digit==9)
    {
        countOfNine++;
    }
    //thirdDigit
    number=number/10;
    digit=number%10;
    if(digit==5)
    {
        countOfFive++;
    }
    else if(digit==0)
    {
        countOfZero++; 
    }
    else if(digit==9)
    {
        countOfNine++;
    }
    //fourth digit
    number=number/10;
    digit=number%10;
    if(digit==5)
    {
        countOfFive++;
    }
    else if(digit==0)
    {
        countOfZero++; 
    }
    else if(digit==9)
    {
        countOfNine++;
    }
    //fifth digit
    number=number/10;
    digit=number%10;
    if(digit==5)
    {
        countOfFive++;
    }
    else if(digit==0)
    {
        countOfZero++; 
    }
    else if(digit==9)
    {
        countOfNine++;
    }
    cout<<"the total no. of 0 are "<<countOfZero<<" and the total no. of 5 are "<<countOfFive<<" and the total no. of 9 are "<<countOfNine;
}
int main(){
    int number;
    cout<<"enter the number ";
    cin>>number;
    digitFrequency(number);
}