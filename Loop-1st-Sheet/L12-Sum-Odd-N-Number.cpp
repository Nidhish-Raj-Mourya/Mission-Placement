#include<iostream>
using namespace std;

int sumOdd(int number){
    int sum = 0;
    for(int i=1;i<=number;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    sumOdd(number);
}