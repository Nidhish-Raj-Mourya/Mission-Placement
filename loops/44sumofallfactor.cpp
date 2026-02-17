#include<iostream>
using namespace std;
int sumOfFactor(int number){
    int sum = 0;
    for(int i =1; i<=number; i++){
        if(number%i == 0){
            sum = sum + i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
int main(){
    int number ;
    cout<<"Enter a number ";
    cin>>number;
    sumOfFactor(number);
    return 0;
}