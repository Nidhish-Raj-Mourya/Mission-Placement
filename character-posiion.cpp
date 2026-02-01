#include<iostream>
using namespace std;
int main(){
    int number;
    char character;
    cout<<"Enter the character : ";
    cin>>character;
    number=int(character);
    if(65<=number and 90>=number){
        if(65<=number and 77>=number){
            cout<<"Its between A to M";
        }
        else{
            cout<<"Its between N to Z";
        }
    }
    else if (97<=number and 122>=number){
        if(97<=number and 109>=number){
            cout<<"Its between a to m";
        }
        else{
            cout<<"Its between n to z";
        }
    }
}