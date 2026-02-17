#include<iostream>
using namespace std;
int lengthOfNumber(int number){
    int count =0;
    int digit = 0;
    while(number != 0){
        digit = number % 10;
        count++;
        number = number / 10;
    }
    return count;
}
int powerOfNumber(int digit, int power)
{    
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

        sum = sum + powerOfNumber(digit,count );
        number = number / 10;
    }
    if(originalNumber == sum){

        cout<<"It is a armstrong number "<<sum<<" "<<originalNumber<<endl;
    }
    else
    {
        cout<<"It is  not an armstrong number "<<sum<<" "<<originalNumber<<endl;
    }
    return 0;
}
int main(){
    int number  ;
    cout<<"Enter a number : ";
    cin>>number;
    armstrongNumber(number);
    return 0;
}