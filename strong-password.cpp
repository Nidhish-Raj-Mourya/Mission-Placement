#include<iostream>
using namespace std;
int main(){
    int length,upperCase,lowerCase,digit;
    cout<<"Enter the length : ";
    cin>>length;
    cout<<"Enter the count of uppercase : ";
    cin>>upperCase;
    cout<<"Enter the count of lowercase : ";
    cin>>lowerCase;
    cout<<"Enter the count of digit : ";
    cin>>digit;
    if(length==(upperCase+lowerCase+digit)){
        if(length>=8){
            cout<<"Strong Password ";
        }
        else if(length>=6){
            cout<<"Medium Password ";
        }
        else{
            cout<<"weak Password ";
        }
    }
    else{
        cout<<"Length is not equivalent ";
    }

}