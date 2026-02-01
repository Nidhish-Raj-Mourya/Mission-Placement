#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the no. : ";
    cin>>number;
    if(number%2==0){
        cout<<"The number is even : "<<number;
    }
    else{
        cout<<"The number is odd : "<<number;
    }
}