#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    if(10<=number&&number<100){
        cout<<"it is of double digit";
    }
    else if(0<=number&&number<10){
        cout<<"it is of single digit";
    }
    else{
        cout<<"it is of more than two digit";
    }
    return 0;
}