#include<iostream>
using namespace std;

int countDigit(int number){
    int count=0;
    for(int i=0;i<=number;i++){
        number=number/10;
        count++;
    }
    cout<<count;
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    countDigit(number);
}