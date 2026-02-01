#include<iostream>
using namespace std;
int karprekarNumber(int number){
  int square=number*number;
  int firstTwoDigit=square/100;
  int secondTwoDigit=square%100;
  int sum=(firstTwoDigit+secondTwoDigit);
  if(number==sum){
    cout<<"it is a Karprekar number ";
  }
  else{
    cout<<"it is not a Karprekar number";
  }
}
int main(){
    int number;
    cout<<"enter two digit number";
    cin>>number;
    karprekarNumber(number);
}