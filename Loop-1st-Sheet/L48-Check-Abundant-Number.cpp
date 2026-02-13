#include<iostream>
using namespace std;

int sumFactorsNumber(int number){
    
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0){
            sum=sum+i;
        }
    }
    return sum;
}

int abundantNumber(int number){
    int abundantNumber = sumFactorsNumber(number);
    if(abundantNumber>number){
        cout<<"Abundant Number : "<<abundantNumber<<" "<<number;
    }
    else{
        cout<<"Not Abundant Number : "<<abundantNumber<<" "<<number;
    }
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    abundantNumber(number);
}