#include<iostream>
using namespace std;

int repeatingAction(int number,int repeation){
    int original=number;
    int sum=0;
    int sum2=0;

    if(number<=0 || number>=10000 || repeation<=0 || repeation>=50){
        cout<<"You are cross the  number limit";
        return 0;
    }

        while(original!=0){
            int digit=original%10;
            original=original/10;
            sum=sum+digit;
        }
       
        int totalSum=sum*repeation;

    while(totalSum!=0){
        int digit=totalSum%10;
        totalSum=totalSum/10;

        sum2=sum2+digit;
    }
    cout<<sum2;

    return 0;
}

int main(){
    int number;
    int repeation;

    cout<<"Enter number:";
    cin>>number;
    cout<<"Enter repeation number:";
    cin>>repeation;

    repeatingAction(number,repeation);
}