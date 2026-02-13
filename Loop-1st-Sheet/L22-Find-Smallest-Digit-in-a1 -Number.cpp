#include<iostream>
using namespace std;

int smallestDigit(int number){

    int smallestDigit=0;
    for(int i=0;number!=0;i++){
        
        int lastDigit = number%10;
        number = number/10;

        if(lastDigit<smallestDigit){
            smallestDigit = lastDigit;
        }
    }

    cout<<"The Largest Digit is : "<<smallestDigit;
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    smallestDigit(number);


}