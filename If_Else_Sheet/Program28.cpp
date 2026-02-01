#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter Number";
    cin>>number;
    if(number%3==0 && number%5==0){
        cout<<"it is divisible by both 3 and 5 \n";
    }

    else if(number%3!=0){
        cout<<"it is not divisible by 3 \n";
    }
    else if(number%5!=0){
        cout<<"it is not divisible by 5 \n";
    }
    else if(number%3!=0 && number%5!=0){
        cout<<"it is divisible by none \n";
    }

    return 0;
}