#include<iostream>
using namespace std;

int factorsNumber(int number){
    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    factorsNumber(number);
}