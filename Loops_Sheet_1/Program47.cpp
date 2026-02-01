#include<iostream>
using namespace std;
int allPerfectNumber(int number){
    for(int j=1;j<number;j++){
        int sum=0;
        if(j==1){
            sum=1;
        }
    for(int i=1;i<j;i++){
        if(j%i==0){
            sum+=i;
        }
    }
    if(sum==j){
    cout<<j<<" ";
}}}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    allPerfectNumber(number);
}