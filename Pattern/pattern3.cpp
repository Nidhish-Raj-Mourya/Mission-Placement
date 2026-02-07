#include<iostream>
using namespace std;

void rightAngle(int number){

    for(int i=1;i<=number;i++){

        for(int  j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}

int main(){

    int number;

    cout<<"enter number:";
    cin>>number;

    rightAngle(number);
}