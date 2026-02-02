#include<iostream>
using namespace std;
void oddEven(int number){
    int digit;
    int countEven=0;
    int countOdd=0;
    while(number!=0){
    digit=number%10;
        number=number/10;
    if(digit%2==0){
        countEven++;
    }
    else{
        countOdd++;
    }
  
    }
    cout<<"Even digit count is:"<<countEven<<endl;
    cout<<"odd digit count is:"<<countOdd;
}
int main(){
    int number;
    cout<<"Enter number:";
    cin>>number;
    oddEven(number);
}