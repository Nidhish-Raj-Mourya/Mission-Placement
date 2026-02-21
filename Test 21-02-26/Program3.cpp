#include<iostream>
using namespace std;

int SundayCalculate(string day,int n)
{
    if(n<=0 || n>365)
    {
        cout<<"Invalid Input";
        return 0;
    }
    int value; 

    if(day=="Mon")
    {
        value=6;
    }
    if(day=="Tues")
    {
        value=5;
    }
    if(day=="Wed")
    {
        value=4;
    }
    if(day=="Thurs")
    {
        value=3;
    }
    if(day=="Fri")
    {
        value=2;
    }
    if(day=="Sat")
    {
        value=1;
    }
    if(day=="Sun")
    {
        value=0;
    }
    int remaining=n-value;
    int remainingSunday=remaining/7;

    if(day=="Sun"){
    cout<<"Total Sunday is "<<remainingSunday;
    }
    else
    {
        cout<<"Total Sunday is "<<remainingSunday+1;
    }
}

int main()
{
    string Day;
    int n;

    cout<<"Enter the Day ";
    cin>>Day;

    cout<<"Enter the N days to be seen ";
    cin>>n;
    
    SundayCalculate(Day,n);
}