#include<iostream>
using namespace std;

int cubeNumber(int number){
    for(int i=1;i<=number;i++){
        cout<<i*i*i<<" ";
    }
    return 0;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    cubeNumber(number);
}