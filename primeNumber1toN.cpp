#include<iostream>
using namespace std;

bool primeNumber(int number){
    int i=2;
    bool flag=true;

    while(i<number){
        
        if(number%i==0){
            flag=false;
            return flag;
        }
        i++;
    }
    return flag;
}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    for(int i=2;i<=number;i++){
    
    if(primeNumber(i)){
        cout<<i<<" ";
    }
 
    }
    return 0;
}