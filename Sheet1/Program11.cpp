#include<iostream>
using namespace std;
int sumEven(int n){
    int sum=0;
    int i=0;
    while(i<=n){
        cout<<i<<" ";
        sum+=i;
        i=i+2;
    }
    cout<<"The sum up to N term is "<<sum;
}
int main(){
    int number;
    cout<<"Enter number up to which sum of even number is to be calculated";
    cin>>number;
    sumEven(number);
    return 0;
}