#include<iostream>
using namespace std;

void rightAngle(int number){

    for(int i=1;i<=number;i++){

        for(int  j=i;j>=1;j--){
            cout<<j<<" ";
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