#include<iostream>
using namespace std;

int sumFactorsNumber(int number){
    
    int sum=0;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            sum=sum+i;
            cout<<i<<" ";
        }
    }
    cout<<sum;
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    sumFactorsNumber(number);
}