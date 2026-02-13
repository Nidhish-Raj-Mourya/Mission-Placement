#include<iostream>
using namespace std;

int alternatingSeries(int number){
    int diff=0,add=0,sum;
    for(int i=1;i<=number;i++){
        if(i%2==0){
            diff=diff-(i*i);
        }
        else{
            add=add+(i*i);
        }
    }
    sum=add+diff;
    cout<<sum;
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    alternatingSeries(number);
}