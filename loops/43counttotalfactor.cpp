#include<iostream>
using namespace std;
int countFactor(int number){
    int count =0;
    for(int i =1; i<=number; i++){
        if(number % i == 0){
            count++;
        }
        
    }

    cout<<count<<endl;
    return 0;
}
int main(){
    int number ;
    cout<<"Enter a number ";
    cin>>number;
    countFactor(number);
    return 0;
}