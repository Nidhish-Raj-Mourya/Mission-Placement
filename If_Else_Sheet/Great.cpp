#include<iostream>
using namespace std;
int main(){
    int number1,number2;
    cout<<"Enter two numbers";
    cin>>number1>>number2;

    if(number1>number2){
        cout<<"number "<<number1 <<" is greatest";
    }
    else if(number1<number2)
    {
        cout<<"number "<<number2 <<" is greatest";
    }
    else if(number1==number2)
    {cout<<"they are equal";}
    return 0;
}