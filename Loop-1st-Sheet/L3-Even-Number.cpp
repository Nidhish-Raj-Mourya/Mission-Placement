#include<iostream>
using namespace std;

int loopEven(int number){
    for(int i=1;i<=number;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;

}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    loopEven(number);

}