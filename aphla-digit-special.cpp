#include<iostream>
using namespace std;
int main(){
    int number;
    char character;
    cout<<"Enter the character : ";
    cin>>character;
    number=int(character);
    cout<<number<<endl;
    if(65<=number and 90>=number){
        cout<<"Its between A-Z";
    }
    else if (97<=number and 122>=number){
        cout<<"Its between a-z";
    }
    else if(48<=number and 57>=number){
        cout<<"Its between 0-9";
    }
    else{
        cout<<"Its a special character";
    }
}