#include<iostream>
using namespace std;

int reverseNumber(int number){
    int reverse=0,lastDigit;
    for(int i=1;number!=0;i++){
        lastDigit=number%10;
        number=number/10;
        reverse=(reverse*10)+lastDigit;
    }
    cout<<reverse;
    return 0;

}


int main(){

    int number;
    cout<<"Enter the number : ";
    cin>>number;

    reverseNumber(number);
}