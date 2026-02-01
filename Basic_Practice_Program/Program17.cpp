#include<iostream>
using namespace std;
int main(){
    int days=0;
    int month=0;
    int year=0;;
    cout<<"Enter days \n";
    cin>>days;
    if(days>=30)
    {
        month=days/30;
    }
    if(month>=12)
    {
        year=month/12;
        month=month%12;
    }
    if(30<=days)
     if(days<365)
      {
     days=days%30;
      }
    if(days>=365)
    {
     days=days%365;
    } 
    
    cout<<"The total year is "<<year<<" and total month is "<<month<<" and total remaining days are "<<days;
    return 0;
}