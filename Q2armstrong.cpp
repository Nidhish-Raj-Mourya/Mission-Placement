#include<iostream>
using namespace std;

int lengthOfNumber(int number ){
int count =0;
while(number != 0){
    int digit = number % 10;
    count++;
}
return count;
}
int powerOfNumber(int digit, int power){
    int result = 1;
    for(int i = 1; i<= power ; i++){
        result = result * power;
    }
    return result;
}

int armstrong(int number){
    int originalNumber, digit, sum = 0;
    int count = lengthOfNumber(number);
    originalNumber = number;
    for(int i = 1; number != 0 ; ++i){
    sum = sum + powerOfNumber(digit,count);
    number = number / 10;
     if(originalNumber == sum){
     
    cout<<"True" <<originalNumber<<sum<<endl;
    }
    else
    {
    cout<<" false" <<originalNumber<<sum<<endl;
    }
}
return 0;
}
int main(){
    int number ;
    cout<<"Enter a number :";
    cin>>number ;
    armstrong(number);
    return 0;
}