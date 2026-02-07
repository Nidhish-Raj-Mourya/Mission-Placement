#include<iostream>
using namespace std;

int countNumber(int number){
    int digit=0;
    int count=0;

    while(number!=0){
        digit=number%10;
        count++;
        number=number/10;
    }

    return count;
}


int power(int digit,int count){
    int value=1;

    for(int i=1;i<=count;i++){
        value=value*digit;
    }

    return value;
}

int armstrongNumber(int number){
    int digit=0;
    int sum=0;
    int temp=number;
    int count=countNumber(number);

    if(number<1 && number>10000){
        cout<<"Invalid number";
        return 0;
    }
    while(number!=0){

        digit=number%10;
        sum=sum+power(digit,count);
        number=number/10;
        
    }

    if(temp==sum){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    armstrongNumber(number);
}