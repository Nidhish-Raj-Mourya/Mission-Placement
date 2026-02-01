#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3;
    cout<<"Enter number1";
    cin>>number1;
    cout<<"Enter number2";
    cin>>number2;
    cout<<"Enter number3";
    cin>>number3;
    if(number1>number2&&number2>number3){
        cout<<"they are in strict descending order";
    }
    else if(number1<number2&&number2<number3){
        cout<<"they are in strict ascending order";
    }
    else{
        cout<<"they are in random order";
    }
    return 0;
}