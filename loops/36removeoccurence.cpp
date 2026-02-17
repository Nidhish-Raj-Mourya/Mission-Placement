#include<iostream>
using namespace std;
int  removeOccurence(int number , int digit1){
    int newnumber = 0;
    while(number != 0){
       int digit = number % 10;
        if(digit != digit1){
            newnumber = newnumber * 10 + digit; 
        }
        number = number / 10;
    }
    cout<<newnumber<<endl;

    return 0;
}
int main(){
    int number,digit;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"Enter a digit : ";
    cin>>digit;
    removeOccurence(number , digit);
    return 0;
}