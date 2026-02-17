#include<iostream>
using namespace std;
int primeFactorization(int number){
    for(int i=2; i<=number; i++){
        while(number % i == 0){
            cout<<i<<" ";
            number= number /i;
        }
    }
        if(number > 1){
        cout<<number<<endl;
    
    }
    return 0;
}
    

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    primeFactorization(number);
    return 0;
}