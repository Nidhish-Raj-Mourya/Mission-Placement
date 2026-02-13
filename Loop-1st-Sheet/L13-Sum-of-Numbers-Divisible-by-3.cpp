#include<iostream>
using namespace std;

int sumDivisbleThree(int number){
    int sum = 0;
    for(int i=1;i<=number;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 5;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    sumDivisbleThree(number);
}