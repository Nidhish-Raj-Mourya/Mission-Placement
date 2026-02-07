#include<iostream>
using namespace std;

int prime(int check){
    bool flag=true;
    for(int i=2;i<check;i++){
        
        if(check%i==0){
            flag=false;
            return flag;
        }

    }

    return flag;
}

int Factorization(int number){
    int check=0;
    for(int i=2;i<=number/2;i++){
         

        if(number%i==0){
           check=prime(i);
           if(check==1){
            cout<<i<<" ";
           }
        }

    }

    return 0;
}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    Factorization(number);
}