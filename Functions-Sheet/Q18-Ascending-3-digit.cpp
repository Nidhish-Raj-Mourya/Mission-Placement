#include<iostream>
using namespace std;
int ascending(int firstNumber)
{
    int variable1,variable2,variable3;
    variable1=firstNumber/100;
    variable2=(firstNumber/10)%10;
    variable3=firstNumber%10;
    if(variable1<variable2 and variable2<variable3){
        cout<<"Ascending Order ";
    }
    else{
        cout<<"Not Ascending Order ";
    }
    return 0;
}
int main(){
    int number1;
    cout<<"Enter the number : ";
    cin>>number1;
    int result = ascending(number1);
}