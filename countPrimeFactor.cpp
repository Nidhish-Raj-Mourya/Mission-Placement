#include<iostream>
using namespace std;

void countPrimeFactor(int number){
    int temp=number;
    for(int i=2;i<=number/2;){

        if(temp%i==0){
            cout<<i<<" ";
            temp=temp/i;
        }
        else{
            i++;
        }
    }
  
}

int main(){
    int number;

     cout<<"Enter number:";
    cin>>number;

      countPrimeFactor(number);

}