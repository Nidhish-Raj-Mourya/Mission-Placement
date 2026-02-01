#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the no. : ";
    cin>>number;
    if(number>0){
        cout<<"Positive number : "<<number;
    }
    else if(number<0){
        cout<<"Negative number : "<<number;
    }
    else{
        cout<<"Zero : "<<number;
    }
}