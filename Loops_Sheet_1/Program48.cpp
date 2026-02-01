#include<iostream>
using namespace std;
int abundantNumber(int number){
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum+=i;
        }
    }
    if(sum>number){
    cout<<"it is abundant number";
}
else{
    cout<<"it is not a abundant number";
}}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    abundantNumber(number);
}