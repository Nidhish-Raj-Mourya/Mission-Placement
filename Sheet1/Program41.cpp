#include<iostream>
using namespace std;
int primeNumberSum(int number){
    int sum=0;
    for(int j=1;j<number;j++){
    int count=0;
    for(int i=2;i<j;i++){
        if(j%i==0){
            count++;
        }
    }
    if (count==0)
    {   
        cout<<j<<" ";
        sum+=j;
    }
}
cout<<"\nThe total sum of prime numbers is "<<sum;
}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    primeNumberSum(number);
}