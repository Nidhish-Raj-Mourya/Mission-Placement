#include<iostream>
using namespace std;
int sumOdd(int n){
    int sum=0;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        sum+=i;
        i=i+2;
    }
    cout<<"The sum up to N term is "<<sum;
}
int main(){
    int number;
    cout<<"Enter number up to which sum of odd term is to be calculated";
    cin>>number;
    sumOdd(number);
    return 0;
}