#include<iostream>
using namespace std;
int sumDivisibleByThree(int n){
    int sum=0;
    int i=0;
    while(i<=n){
        if(i%3==0){
        cout<<sum;
        sum+=i;}
        i++;
        
    }
    cout<<"The sum up to N term is "<<sum;
}
int main(){
    int number;
    cout<<"Enter number up to which sum of number divisible by 3 is to be calculated";
    cin>>number;
    sumDivisibleByThree(number);
    return 0;
}