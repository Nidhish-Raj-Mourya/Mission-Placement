#include<iostream>
using namespace std;

int lengthOfNumber(int number){

    int length=0;

    for(int i=1;number!=0;i++){
        number=number/10;
        length++;
    }

    return length;
}

int power(int digit,int exponent){

    int result=1;

    for(int i=1;i<=exponent;i++){
        result=result*digit;
    }

    return result;
}

int armStrongNumber(int number){

    int originalNumber,digit,sum=0;
    int count = lengthOfNumber(number);
    originalNumber=number;

    for(int i=1;number!=0;i++){
        digit=number%10;
        
        sum=sum+power(digit,count);
        number=number/10;

    }
    if(originalNumber==sum){
        cout<<"It is ArmStrong Number "<<"Sum : "<<sum<<" "<<"Original Number : "<<originalNumber;
    }
    else{
        cout<<"It is not ArmStrong Number "<<"Sum : "<<sum<<" "<<"Original Number : "<<originalNumber;
    }
    return 0;


}

int main(){
    
    int number;


    cout<<"Enter the number : ";
    cin>>number;

    
    armStrongNumber(number);

}