#include<iostream>
using namespace std;
int main(){
    int totalSeconds,remainingSeconds,hours,minutes,seconds;
    cout<<"Enter the Seconds : ";
    cin>>totalSeconds;

    hours=totalSeconds/3600;
    remainingSeconds=totalSeconds%3600;
    cout<<hours<<" Hours ";
    minutes=remainingSeconds/60;
    cout<<minutes<<" Minutes ";
    seconds=remainingSeconds%60;
    cout<<seconds<<" Seconds  ";
}