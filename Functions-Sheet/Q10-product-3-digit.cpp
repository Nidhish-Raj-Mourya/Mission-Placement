#include<iostream>
using namespace std;
int product(int firstNumber)
{
    int variable1,variable2,variable3;
    variable1=firstNumber%10;
    variable2=(firstNumber/10)%10;
    variable3=firstNumber/100;
    int result = variable1*variable2*variable3;
    return result;
}
int main(){
    int number1;
    cout<<"Enter the number : ";
    cin>>number1;
    int result = product(number1);
    cout<<result;
}