#include<iostream>
using namespace std;
int EvenOdd(int number){
    int countEven=0;
    int countOdd=0;
    int digit=0;
    while(number!=0){
        digit=number%10;
        if(digit%2==0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
        number=number/10;
    }
    cout<<"The even digits are "<<countEven<<"\n";
    cout<<"The odd digits are "<<countOdd<<"\n";
}
int main(){
    int number;
    cout<<"Enter number ";
    cin>>number;
    EvenOdd(number);
}