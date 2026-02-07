#include<iostream>
using namespace std;

bool primeNumberWithPrimeSum(int Xvaraible,int Yvariable){
    if(Xvaraible<=1 and Yvariable<=1){
        return false;
    }
    for(int i=2;i<=Xvaraible and Xvaraible<=Yvariable;i++){
            if(Xvaraible%i==0){
            return false;
        }
        return true;
        
    }
    return 0;
}

int main(){
     int Xvariable,Yvariable;

     cout<<"Enter the X variable : ";
     cin>>Xvariable;

     cout<<"Enter the Y variable : ";
     cin>>Yvariable;

    primeNumberWithPrimeSum(Xvariable,Yvariable);
}