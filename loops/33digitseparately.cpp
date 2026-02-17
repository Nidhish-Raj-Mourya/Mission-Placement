#include<iostream>
using namespace std;
int digitSeparately(int number){
    int digit ;
    while(number != 0){
        digit = number % 10;
        cout<<digit<<endl;
        number = number / 10;
    }
    return 0;
}
int main(){
    int number ;
    cout<<"Enter  a number : ";
    cin>>number;
    digitSeparately(number);
    return 0;
}