#include<iostream>
using namespace std;

int checkDivisibilityBy9(int number){

    if(number>100 and number<999){
        if(number%9==0){
            cout<<"Yes the number is Divisbile by 9 : "<<number;
        }
        else{
            cout<<"No the number is not Divisbile by 9 : "<<number;
        }
    }
    else{
        cout<<"Invalid Input : "<<number;
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    checkDivisibilityBy9(number);
}

