#include<iostream>
using namespace std;
int divisors(int number){
int i=1;
int sum=0;
while(number>=i){
    if(number%i==0){
        cout<<i<<" ";
        sum+=i;
    }
    i++;
}
cout<<"\nThe sum of divisors is "<<sum;
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    divisors(number);
    
}