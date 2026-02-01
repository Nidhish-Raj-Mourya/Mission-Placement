#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum,difference,product,quotient,remainder;
    cout<<"Enter number 1 \n";
    cin>>num1;
    cout<<"Enter number 2 \n";
    cin>>num2;
    sum=num1+num2;
    cout<<"The sum is "<<sum<<"\n";
    difference=num1-num2;
    cout<<"The difference is "<<difference<<"\n";
    product=num1*num2;
    cout<<"The product is "<<product<<"\n";
    quotient=num1/num2;
    cout<<"The quotient is "<<quotient<<"\n";
    remainder=num1%num2;
    cout<<"The remainder is "<<remainder<<"\n";
    return 0;
}