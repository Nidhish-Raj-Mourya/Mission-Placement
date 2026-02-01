#include<iostream>
using namespace std;
int neon(int number){
    int squareOfNumber=number*number;
    int firstDigit=squareOfNumber/10;
    int secondDigit=squareOfNumber%10;
    if(number==(firstDigit+secondDigit)){
        cout<<"it is a neon number";
    }
    else{
        cout<<"it is not a neon number";
    }
}
int main(){
  int number;
  cout<<"enter the number";
  cin>>number;
  neon(number);
}