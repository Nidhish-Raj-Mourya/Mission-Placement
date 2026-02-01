#include<iostream>
using namespace std;
int gapfulNumber(int number){
    int firstDigit=number/100;
    int thirdDigit=number%10;
    int newNumber=firstDigit*10+thirdDigit;
    if(number%newNumber==0){
        cout<<"it is a gapful number ";
    }
    else
    {
        cout<<"it is not a gapful number ";
    }
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    gapfulNumber(number);
}