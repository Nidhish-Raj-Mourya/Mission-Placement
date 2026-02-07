#include<iostream>
using namespace std;

void rightTriangle(int number){
    int temp=number;

    for(int i=1;i<=number;i++){

        for(int  j=1;j<=temp;j++){
            cout<<j<<" ";
           
        }
         temp--;
        cout<<endl;
    }
    
}

int main(){

    int number;

    cout<<"enter number:";
    cin>>number;

    rightTriangle(number);
}