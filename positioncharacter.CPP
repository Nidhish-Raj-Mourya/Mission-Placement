#include<iostream>
using namespace std;
int main(){
    char ch;
    int assic;
    cout<<"The character is: ";
    cin>>ch;
    assic = int(ch);
    if(65>=assic&&assic>=109){
        cout<<"Character is between A-M.";
    }
    else if(110>=assic&&assic>=122){
        cout<<"Charcter is between N-Z";
    }
    else if(77>=assic&&assic>=97){
        cout<<"Character is between a-m";
    }
    else if(78>=assic&&assic>=90){
        cout<<"Charcter is between n-z";
    }
    else{
        cout<<"Invalid";
    }

   
    return 0;
}