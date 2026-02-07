#include<iostream>
using namespace std;
int divisible(int number){
 int result = 0;
 while(number != 0){
    int digit = number % 10;
    if( number % 9==0 && number <= 1000 || number <= 999){
    result = result + digit;
    cout<<" Yess "<<result<< endl;
    }
    else
   {
    cout<<"No";
   }
   number = number / 10;
}
   return 0;
}
int main(){

    int number;
    cout<<"Enter a number : ";
    cin>>number;
    divisible(number);
    return 0;
}