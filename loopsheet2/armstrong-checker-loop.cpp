#include<iostream>
using namespace std ;
int length(int number){
    int count = 0;
    int digit;
    while(number!=0){
    digit = number%10;
    count++;
    number = number/10;
    }
    return count;
}
int power(int number,int count){
  int result = 1;
  for(int i = 1;i<=count;i++){
    result  = result*number;
  }
  return result;
}
int armstrong(int number){
    int num = number;
    int digit,sum=0;
    int count = length(number);
    for(int i =1;num!=0;i++){
      digit = num%10;
      sum = sum+power(digit,count);
      num = num/10;
    }
    if(number==sum){
        cout<<"The number is armstrong "<<sum;
    }
    else{
        cout<<"The number is not armstrong "<<sum;
    }
    return 0;
}

int main(){

    int number;

    cout<<"The number is : ";
    cin>>number;

    armstrong(number);
    return 0;
}