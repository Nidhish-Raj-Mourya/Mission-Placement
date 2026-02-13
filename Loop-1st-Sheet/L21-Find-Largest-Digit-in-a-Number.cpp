#include<iostream>
using namespace std;

int largestDigit(int number){

    int largestDigit=0;
    for(int i=0;number!=0;i++){
        
        int lastDigit = number%10;
        number = number/10;

        if(lastDigit>largestDigit){
            largestDigit = lastDigit;
        }
    }

    cout<<"The Largest Digit is : "<<largestDigit;
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    largestDigit(number);


}