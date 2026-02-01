#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"The year is: ";
    cin>>year;
    if(year%4==0){
    cout<<"Leap Year";
  }
  else{
    cout<<"Not Leap Year";
  }
return 0;
}