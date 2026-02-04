#include<iostream>
using namespace std;

void factor(int number){

    for(int i=1;i<=number;i++){

        if(number%i==0){
            cout<<i<<" ";
        
        }
    }

}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    factor(number);
}