#include<iostream>
using namespace std;
int main(){
    int day, month;
    cin >> day >> month;
    if(month == 1 && day >=1 && day <=31)
    {cout << "Valid date";}
    else if(month == 2 && day >=1 && day <=29)
    {cout << "Valid date";}
    else if(month == 3 && day >= 1 && day <= 31)
    {cout << "Valid date";}

    else if(month == 4 && day >= 1 && day <= 30)
    {cout << "Valid date";}
    
    else if(month == 5 && day >= 1 && day <= 31)
    {cout << "Valid date";}
    
    else if(month == 6 && day >= 1 && day <= 30)
    {cout << "Valid date";}
    
    else if(month == 7 && day >= 1 && day <= 31)
    {cout << "Valid date";}

    else if(month == 8 && day >= 1 && day <= 31)
    {cout << "Valid date";}
    
    else if(month == 9 && day >= 1 && day <= 30)
    {cout << "Valid date";}
    
    else if(month == 10 && day >= 1 && day <= 31)
    {cout << "Valid date";}
    
    else if(month == 11 && day >= 1 && day <= 30)
    {cout << "Valid date";}

    else if(month == 12 && day >= 1 && day <= 31)
    {cout << "Valid date";}
    else 
    {cout << "Invalid date";}

}