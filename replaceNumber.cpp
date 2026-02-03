#include<iostream>
using namespace std;

int replaceDigit(int number,int oldDigit,int newDigit){
    int place=1;
    int singleDigit=1;
    int newNumber=0;
    
    while(number!=0){
       singleDigit=number%10;
       
       if(singleDigit==oldDigit){
            singleDigit=newDigit;
       }
       newNumber=newNumber+(singleDigit*place);
        place=place*10;
       number=number/10;
    }

    return newNumber;
}

int main(){
    int number=0;
    int oldDigit=0;
    int newDigit=0;

    cout<<"enter number:";
    cin>>number;
    cout<<"enter old digit:";
    cin>>oldDigit;
    cout<<"enter new digit:";
    cin>>newDigit;

    cout<<"New number is:"<<replaceDigit(number,oldDigit,newDigit);
}