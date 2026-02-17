#include<iostream>
using namespace std;
int countPrimeFactorization(int number){
    int count = 0;
    for(int i=2; i<=number; i++){
        while(number % i == 0){
            count++;
            number= number /i;
        }
    }
    cout<<count<<endl;
    return count;
}
int main(){
    int number;
    cout<<"Enter a number :";
    cin>>number;
    countPrimeFactorization(number);
    return 0;
}