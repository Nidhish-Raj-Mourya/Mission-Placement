#include<iostream>
using namespace std;

bool PrimeNumber(int number){

    if(number<=1){
        return false;
    }
    for(int i=2;i<=number;i++){
        if(number%i==0){
            return false;
        }
        return true;
    }
    return 0;
}

int sumPrimeNumber(int number){

    int sum=0;
        
    for(int i=1;i<=number;i++){
            
        if(PrimeNumber(i)){
            cout<<i<<" ";   
            sum=sum+i;
            
        }
        
    }
    cout<<sum;
    return 0;
    
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    sumPrimeNumber(number);
}