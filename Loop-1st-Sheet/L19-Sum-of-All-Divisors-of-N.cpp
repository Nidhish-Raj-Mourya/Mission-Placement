#include<iostream>
using namespace std;

int allDivisor(int number){
    int sum=0;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}

int main(){
    int number;
    cout<<"Enter the the value : ";
    cin>>number;
    allDivisor(number);

}