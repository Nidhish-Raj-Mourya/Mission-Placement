#include<iostream>
using namespace std;
int sum(int num,int action){
    int digit;
    int sum=0,add=0;
    if(0<num&&num<=1000){
    for(int i =0;i<=action;i++){
        digit = num%10;
        sum = sum+digit;
        num = num/10;
    }
}
 if(0<action&&action<=50){
        for(int j =0;j<=action;j++){
            digit = sum%10;
            add = add+digit;
            sum = sum/10;
        }
        
    }
    cout<<"The sum is: "<<add;

    return 0;
}
int main(){
    int number,action;

    cout<<"Enter the number: ";
    cin>>number;

    cout<<"The action will be done by ";
    cin>>action;
    
    sum(number,action);



    return 0;
}