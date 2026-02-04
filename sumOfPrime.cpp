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
    int sum=0;

    cout<<"Enter number:";
    cin>>number;

    for(int i=2;i<=number;i++){
    
    if(primeNumber(i)){
        sum=sum+i;
    }
    
    }
    cout<<"sum of all prime number is:"<<sum;

    return 0;
}