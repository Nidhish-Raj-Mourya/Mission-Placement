#include<iostream>
using namespace std;

int diamondShape(int number){
     int space=0;
    for(int i=1;i<=number/2;i++){
        for(int space=number;space>i;space--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=number/2+1;i>=1;i--){
        for(int space=number;space>i;space--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    diamondShape(number);
}