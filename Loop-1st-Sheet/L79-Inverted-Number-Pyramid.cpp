#include<iostream>
using namespace std;

int invertedPyramind(int number){
    int space=0;
    for(int i=number;i>=1;i--){
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

    invertedPyramind(number);
}