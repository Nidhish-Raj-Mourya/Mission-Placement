#include<iostream>
using namespace std;
int main(){
    int days,weeks,years,totalDays,remainingDays;
    cout<<"Enter the days : ";
    cin>>totalDays;
    years=totalDays/365;
    remainingDays=totalDays%365;
    cout<<years<<" Years ";
    weeks=remainingDays/7;
    days=remainingDays%7;
    cout<<weeks<<" Weeks ";
    cout<<days<<" Days ";

}