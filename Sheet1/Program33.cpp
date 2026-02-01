#include<iostream>
using namespace std;
int printDigit(int number){
    int digit=0;
    while(number!=0){
        digit=number%10;
        cout<<digit<<"\n";
        number=number/10;
    }
}
int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    printDigit(number);
    return 0;
}