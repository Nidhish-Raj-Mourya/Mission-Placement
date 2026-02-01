#include<iostream>
using namespace std;
int checkSpecificDigit(int number,int checkDigit){
    int digit=0;
    int count=0;
    while(number!=0){
        digit=number%10;
        if(digit==checkDigit){
            count++;
        }
        number=number/10;
    }
    if(count==0){
        cout<<"it is not present ";

    }
    else{
        cout<<"it is present";
    }

}
int main(){
    int number,check;
    cout<<"Enter the number ";
    cin>>number;
    cout<<"Enter the digit to be checked";
    cin>>check;
    checkSpecificDigit(number,check);
    return 0;
}