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
     if(exponent==1)
    {
        return exponent;     
    }
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
        cout<<sum<<" ";
    }
    return 0;
}
int armStrongNumber1toN(int number){
    for(int i=1;i<=number;i++){
        armStrongNumber(i);
    }
    return 0;
}



int main(){
    
    int number;


    cout<<"Enter the number : ";
    cin>>number;

    
    armStrongNumber1toN(number);

}