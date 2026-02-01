#include<iostream>
using namespace std;
int techNumber(int number){
  int firstTwoDigit=number/100;
  int secondTwoDigit=number%100;
  int sum=(firstTwoDigit+secondTwoDigit)*(firstTwoDigit+secondTwoDigit);
  if(number==sum){
    cout<<"it is a tech number ";
  }
  else{
    cout<<"it is not a tech number";
  }
}
int main(){
    int number;
    cout<<"enter four digit number";
    cin>>number;
    techNumber(number);
}