#include<iostream>
using namespace std;
int main(){
    float amount,months,interestRate,EMI,monthlyAmount,Interest;
    cout<<"Enter the amount : ";
    cin>>amount;
    cout<<"Enter the months : ";
    cin>>months;
    cout<<"Enter the interest rate : ";
    cin>>interestRate;

    monthlyAmount=amount/months;
    Interest=(amount*interestRate)/100;
    EMI=monthlyAmount+Interest;
    cout<<"The EMI is : "<<EMI;
}