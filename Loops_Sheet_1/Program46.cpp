#include<iostream>
using namespace std;
int perfectNumber(int number){
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
    }
    if(sum==number){
    cout<<"it is a perfect number";
}
else{
    cout<<"it is not a perfect number";
}}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    perfectNumber(number);
}