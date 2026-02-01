#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3;
    cout<<"Enter the number : ";
    cin>>number1;
    cout<<"Enter the number : ";
    cin>>number2;
    cout<<"Enter the number : ";
    cin>>number3;
    if(number1<number2 and number2<number3){
        cout<<"Strcitly ascending order";
    }
    else if(number1>number2 and number2>number3){
        cout<<"Strcitly descending order";
    }
    else{
         cout<<"Neither ";
    }
}