#include<iostream>
using namespace std;

int perfectSquare(int number){
    int firstDigit = number/10;
    int secondDigit = number%10;
    int result = firstDigit*secondDigit;
    if(result==1 or result==4 or result==9 or result==16 or result==25 or result==36 or result==49 or result==64  or result==81 or result==100){
        cout<<"Perfect Square : ";
    }
    else{
        cout<<"Not a Perfect Square : ";
    }
    return result;

}

int main(){
    int number;
    cout<<"Enter the no. : ";
    cin>>number;
    int result = perfectSquare(number);
    cout<<result;

}