#include<iostream>
using namespace std;

int factorial(int number){
    int fact = 1;
    for(int i=1;i<=number;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    factorial(number);
}