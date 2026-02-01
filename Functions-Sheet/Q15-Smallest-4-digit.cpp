#include<iostream>
using namespace std;
int smallest(int firstNumber)
{
    int variable1,variable2,variable3,variable4;
    variable1=firstNumber/1000;
    variable2=(firstNumber/100)%10;
    variable3=(firstNumber/10)%10;
    variable4=firstNumber%10;
    if(variable1<variable2 and variable1<variable3 and variable1<variable4){
        cout<<"variable 1 is the smallest : "<<variable1;
    }
    else if(variable2<variable3 and variable2<variable4){
        cout<<"variable 2 is the smallest : "<<variable2;
    }
    else if(variable3<variable4){
        cout<<"variable 3 is the smallest : "<<variable3;
    }
    else{
        cout<<"variable 4 is the smallest : "<<variable4;
    }
    return 0;
}
int main(){
    int number1;
    cout<<"Enter the number : ";
    cin>>number1;
    int result = smallest(number1);
}