#include<iostream>
using namespace std;
int main(){
    int sum,number,first,second,third;
    cout<<"Enter the number : ";
    cin>>number;
    first=number%10;
    second=(number/10)%10;
    third=number/100;
    sum=first+second+third;
    cout<<sum;
}