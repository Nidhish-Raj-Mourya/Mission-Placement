#include<iostream>
using namespace std;

void perfectNumber(int number){
    int sum=0;

    for(int i=1;i<=number/2;i++){

        if(number%i==0){
            sum=sum+i;
        }

    }

    if(sum==number){
        cout<<sum<<" ";
    }

}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    for(int i=1;i<=number;i++){
        perfectNumber(i);
    }
    
}