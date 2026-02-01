#include<iostream>
using namespace std;
int main(){
    int month , year;
    cin >> month >> year;
    if(month == 1)
    {cout << "January and the number of days are 31";}
    else if(month == 2)
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
     {cout << "February and the number of days are 29";}
        else
        {cout << "February and the number of days are 28";}
    }
    else if(month == 3)
    {cout << "March and the number of days are 31";}
    else if(month == 4)
    {cout << "April and the number of days are 30";}
    else if(month == 5)
    {cout << "May and the number of days are 31";}
    else if(month == 6) 
    {cout << "June and the number of days are 30";}
    else if(month == 7)
    {cout << "July";}
    else if(month == 8)
    {cout << "August and the number of days are 30";}
    else if(month == 9)
    {cout << "September and the number of days are 30";}
    else if(month == 10)
    {cout << "October";}
    else if(month == 11)
    {cout << "November and the number of days are 30";}
    else if(month == 12)
    {cout << "December and the number of days are 31";}
    return 0;
}