#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year";
    cin>>year;
    if(year%4==0&&(year%100!=0||year%400==0)){
    cout<<"it is leap year";
    }
    else
    {
        cout<<"it is not a leap year";
    }
}