#include<iostream>
using namespace std;
int main(){
    float income, tax, tax_amount;
    cin >> income ;
    
    if(income >= 0 && income <= 250000)
    {cout << "No tax";}
    else if(income >= 250000 && income <= 500000)
    {tax = 5.0; 
    tax_amount = (income * tax)/100;
     cout<<tax_amount;}
    else if(income > 500000 && income <= 1000000)
    {tax = 20;
    tax_amount = (income * tax)/100;
    cout<<tax_amount;}
    else if(income >= 1000000)
    {tax = 30;
    tax_amount = (income * tax)/100;
    cout<<tax_amount;}
    return 0;
}