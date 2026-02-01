#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter a single character : ";
    cin>>character;
    if(character=='a' or character=='A' or character=='e' or character=='E' or character=='i' or character=='I' or character=='o' or character=='O' or character=='u' or character=='U' ){
        cout<<"Its a vowel : "<<character;
    }
    else{
        cout<<"Its a consonant : "<<character;
    }
}