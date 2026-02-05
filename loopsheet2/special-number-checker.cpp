#include<iostream>
using namespace std;
int special(int num){

    int number = num;
    int sum = 0;
    int product =1;

    while(num!=0){
        int digit=num%10;
        sum = sum+digit;
        product = product*digit;
        num = num/10;
    }
    sum = sum+product;

    if(sum==number){
        cout<<"The number is special "<<number;
    }
    else{
        cout<<"The number is not special "<<number;
    }
    return 0;
}
int main(){

    int number;

    cout<<"Enter the number: ";
    cin>>number;

    special(number);

    return 0;
}