#include<iostream>
using namespace std;

int replaceSpecificDigit(int number, int oldDigit, int newDigit){
    
    int endDigit;
    int result=0,place=1;
    for(int i=1;number!=0;i++){
        endDigit=number%10;
        number=number/10;
        if(endDigit==oldDigit){
            endDigit=newDigit;
        }
        result=result+endDigit*place;
        place=place*10;
    }
    cout<<result;
    return 0;
}

int main(){

    int number,oldDigit,newDigit;

    cout<<"Enter the number : ";
    cin>>number;

    cout<<"Enter the digit : ";
    cin>>oldDigit;

    cout<<"Enter the digit : ";
    cin>>newDigit;

    replaceSpecificDigit(number,oldDigit,newDigit);
}