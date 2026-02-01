#include<iostream>
using namespace std;
int digitSum(int number)
{
 int sum=0;
 sum+=number/100;   
 number=number%100;  
 sum+=number/10;
 sum+=number%10;
 return sum;
}
int main(){
    int number,sum;
    cout<<"Enter Number";
    cin>>number;
    sum=digitSum(number);
    if(sum%3==0)
    {
        cout<<"it is divisble by 3";
    }
    else
    {
        cout<<"it is not divisible by 3";
    }
}