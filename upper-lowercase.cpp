#include<iostream>
using namespace std;
int main(){
    int number;
    char character;
    cout<<"Enter the character : ";
    cin>>character;
    number=int(character);
    if(65<=number and 90>=number){
        cout<<"Its an Upper Case ";
    }
    else{
        cout<<"Its a Lower Case ";
    }
}