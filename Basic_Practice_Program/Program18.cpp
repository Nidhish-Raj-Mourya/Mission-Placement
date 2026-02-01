#include<iostream>
using namespace std;
int main(){
    int seconds=0,min=0,hour=0;
    cout<<"Enter Seconds \n";
    cin>>seconds;
    if(seconds>=60)
    {
    min=seconds/60;
    seconds=seconds%60;
    }
    if(min>=60)
    {
    hour=min/60;
    min=min%60;
    }
    cout<<"After conversion the hours is "<<hour<<" the min is "<<min<<" the seconds is "<<seconds;
} 
