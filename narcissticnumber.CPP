#include<iostream>
using namespace std;
int arm(int number){
    int digit1 = number/100;
    int digit2 = number%100;
    digit2 = digit2/10;
    int digit3 = number%10;
    int cube = (digit1*digit1*digit1)+(digit2*digit2*digit2)+(digit3*digit3*digit3);
   
return cube;
}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    int cube = arm(number);
    cout<<"Number is: "<<number<<endl;
    cout<<"The sum is: "<<cube;
return 0;
}