#include<iostream>
using namespace std;
int primeNumberCount(int number){
    int countOfPrime=0;
    for(int j=1;j<number;j++){
    int count=0;
    for(int i=2;i<j;i++){
        if(j%i==0){
            count++;
        }
    }
    if (count==0)
    {
        countOfPrime++;
    }
}
cout<<"The total prime number in range is "<<countOfPrime;
}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    primeNumberCount(number);
}