#include<iostream>
using namespace std;

int squareNumber(int number){
    for(int i=1;i<=number;i++){
        cout<<i*i<<" ";
    }
    return 0;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    squareNumber(number);
}