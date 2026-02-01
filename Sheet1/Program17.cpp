#include<iostream>
using namespace std;
int poweralculator(int base ,int exponent){
    int answer=base,i=1;
    while(exponent>i){
        answer*=base;
        i++;
    }
    cout<<answer;
}
int main(){
    int base , exponent;
    cout<<"Enter the base and exponent ";
    cin>>base;
    cin>>exponent;
    poweralculator(base,exponent);
    return 0;

}