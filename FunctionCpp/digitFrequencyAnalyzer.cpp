#include<iostream>
using namespace std;

void digitFrequencyAnalyzer(int number)
{
    int countZero = 0 , countFive = 0 , countNine = 0;

    int firstDigit = number/10000;
    int secondDigit = (number/1000)%10;
    int thirdDigit = (number/100)%10;
    int fourthDigit = (number/10)%10;
    int fifthDigit = number%10;
    
if(firstDigit == 0) countZero++;
if(secondDigit == 0) countZero++;
if(thirdDigit == 0) countZero++;
if(fourthDigit == 0) countZero++;
if(fifthDigit == 0) countZero++;

if(firstDigit == 5) countFive++;
if(secondDigit == 5) countFive++;
if(thirdDigit == 5) countFive++;
if(fourthDigit == 5) countFive++;
if(fifthDigit == 5) countFive++;

if(firstDigit == 9) countNine++;
if(secondDigit == 9) countNine++;
if(thirdDigit == 9) countNine++;
if(fourthDigit == 9) countNine++;
if(fifthDigit == 9) countNine++;

cout<<"Zeroes are = " <<countZero<<endl;
cout<<"Five are = " <<countFive<<endl;
cout<<"Nine are = " <<countNine<<endl;

}
int main()
{
    int number;
    cout<<"Enter 5 - digit number :";
    cin>>number;

    digitFrequencyAnalyzer(number);
}