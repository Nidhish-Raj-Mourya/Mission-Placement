#include<iostream>
using namespace std;

int countFactorsNumber(int number){
    
    int count=0;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<i<<" "<<endl;
            count++;
        }
    }
    cout<<count;
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    countFactorsNumber(number);
}