#include<iostream>
using namespace std;

int perfectNumberChecker(int number){
    
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum=sum+i;
        }
    }
    return sum;
}

int perfectNumberOrNot(int number){
    
    int sum = perfectNumberChecker(number);
    if(sum==number){
        cout<<sum<<" ";
    }
    return sum;
}

int allPerfectNumber(int number){
    for(int i=1;i<=number;i++){
        perfectNumberOrNot(i);
    }
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    allPerfectNumber(number);
}