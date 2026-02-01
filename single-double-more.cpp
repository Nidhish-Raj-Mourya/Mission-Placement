#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if(0<=number and 9>=number){
        cout<<"Single Digit ";
    }
    else if(10<=number and 99>=number){
        cout<<"Double Digit ";
    }
    else{
        cout<<"More than Double Digit ";
    }

}