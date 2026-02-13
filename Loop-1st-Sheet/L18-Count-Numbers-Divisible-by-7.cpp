#include<iostream>
using namespace std;

int sumDivisbleSeven(int number){
    int count = 0;
    for(int i=1;i<=number;i++){
        if(i%7==0){
            count++;
        }
    }
    cout<<count;
    return 5;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    sumDivisbleSeven(number);
}