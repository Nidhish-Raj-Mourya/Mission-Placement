#include<iostream>
using namespace std;
int divisibilty(int firstNumber)
{
    int variable1,variable2,variable3;
    variable1=firstNumber/100;
    variable2=(firstNumber/10)%10;
    variable3=firstNumber%10;
    int result=variable1+variable2+variable3;
    if(result%3==0){
        cout<<"It is divisible by 3 : ";
    }
    else{
        cout<<"It is not divisible by 3 : ";
    }
    return result;
}
int main(){
    int number1;
    cout<<"Enter the number : ";
    cin>>number1;
    int result = divisibilty(number1);
    cout<<result;
}