#include<iostream>
using namespace std;

void checkDivisiblity(int number){

    if(number>=100 && number<=999){

        if(number%9==0){
        cout<<"YES";
        }
        else{
        cout<<"NO";
        }
    }
    else{
        cout<<"number is less than 100 or number is more than 999";
    }    

}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    checkDivisiblity(number);

}