#include<iostream>
using namespace std;
int rootCalculator(int number){
    int firstDigit=number/1000;
    number=number%1000;   
    int secondDigit=number/100;
    number=number%100;  
    int thirdDigit=number/10;
    int fourthDigit=number%10;
    int sum=firstDigit+secondDigit+thirdDigit+fourthDigit;
    if(sum/10!=0){
        firstDigit=sum/10;
        secondDigit=sum%10;
        sum=firstDigit+secondDigit;
        cout<<"sum is "<<sum<<"\n";
            if(sum/10!=0){
             firstDigit=sum/10;
             secondDigit=sum%10;
             sum=firstDigit+secondDigit;
             cout<<"sum is "<<sum;}
    }
    else{
        cout<<"Sum is "<<sum;
    }
}

int main(){
    int number;
    cout<<"enter the number ";
    cin>>number;
    rootCalculator(number);
}