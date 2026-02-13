#include<iostream>
using namespace std;

int sumDigitSingleDigit(int number){
    int num=number;
    int digit;
    for(int i=1;number>9;i++){
        int sum=0;
        for(int i=1;number!=0;i++){
            digit=number%10;
            sum=sum+digit;
            number=number/10;
        }
        number=sum;
        cout<<sum<<" ";
    }
    
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    sumDigitSingleDigit(number);
}