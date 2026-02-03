#include<iostream>
using namespace std;

int addition(int number){
    int digit;
   
    while(number>=10){
        int sum=0;

        while(number!=0){
        digit=number%10;
        number=number/10;
        sum=sum+digit;
        }

        number=sum;
    } 

    return number;
    }

int main(){
    int number=0;

    cout<<"Enter number:";
    cin>>number;
    
    cout<<"sum is:"<<addition(number);
    return 0;
}