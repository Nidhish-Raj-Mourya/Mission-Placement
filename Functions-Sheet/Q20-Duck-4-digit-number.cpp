#include<iostream>
using namespace std;
int duckNumber(int number){
    int variable1,variable2,variable3,variable4;
    variable1=number/1000;
    variable2=(number/100)%10;
    variable3=(number/10)%10;
    variable4=number%10;
    if(variable1!=0 and variable2==0 or variable3==0 or variable4==0)
    {
         cout<<"Duck Number : ";
    } 
    else{
         cout<<"Not Duck Number : ";
    } 
    return number;
}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int result = duckNumber(number);
    cout<<result;
}