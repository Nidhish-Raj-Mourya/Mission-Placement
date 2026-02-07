#include<iostream>
using namespace std;

int primeNumber(int m){
   for(int i=1;i<=m/2;i++){

    if(m%i==0){
        return false;
    }

    return true;
   }
}

int main(){
    int n,m;

    cout<<"Enter starting range:";
    cin>>n;
    cout<<"Enter ending range:";
    cin>>m;

    for(n;n<=m;n++){

        if(primeNumber(n)){
            cout<<n;
        }
        
    }
}