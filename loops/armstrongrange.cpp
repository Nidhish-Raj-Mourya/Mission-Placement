#include<iostream>
using namespace std;
int lengthOfNumber(int number){
    int count =0;
    while(number != 0){
        number = number / 10;
        count++;
        
    }
    return count;
}
int powerOfNumber(int digit, int power)
{    
    if(power == 1)
    {
        return power;
    }
    int result = 1;
    for(int i = 1; i <= power; i++){
        result = result * digit;
    }
    return result;

}
int armstrongNumber(int number){
    int originalNumber, digit,sum = 0;
    int count = lengthOfNumber(number);
    originalNumber = number;
    for(int i = 1; number!=0; i++){
        digit = number % 10;

        sum = sum + powerOfNumber(digit,count);
        number = number / 10;
    }
    if(originalNumber == sum){

        cout<<sum<<" "<<endl;
    }

    return sum;
    
    
}

int rangeNumber(int number){

    for(int i = 1; i<= number; i++){
        armstrongNumber(i);
    }
    return 0;
}

int main(){
    int number  ;
    cout<<"Enter a number : ";
    cin>>number;
   
    rangeNumber(number);
    return 0;
}