#include<iostream>
using namespace std;

int loopNumber(int number){
    for(int i=1;i<=number;i++){
        cout<<i<<" ";
    }
    return 0;
}

int main(){
    int number , result;
    cout<<"Enter the number : ";
    cin>>number;
    loopNumber(number);
}