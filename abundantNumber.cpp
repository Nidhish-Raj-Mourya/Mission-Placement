#include<iostream>
using namespace std;

void abundantNumber(int number){
    int sum=0;

    for(int i=1;i<=number/2;i++){

        if(number%i==0){
            sum=sum+i;
        }

    }

    if(sum>number){
        cout<<"abundant number ";
    }
    else{
        cout<<"not abundant number";
    }

}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    abundantNumber(number); 
    
}