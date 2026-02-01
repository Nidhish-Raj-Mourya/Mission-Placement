#include<iostream>
using namespace std;
int main(){
    int ascii;
    char input;
    cout<<"Enter character";
    cin>>input;
    ascii=int(input);
    if(65<=ascii &&ascii<=90){
        cout<<"it is between A-Z";
    }
    if(97<=ascii&&ascii<=120){
        cout<<"it is between a-z";
    }
    if(48<=ascii&&ascii<=57){
        cout<<"it is between 0-9";
    }
    else{
        cout<<"it is special character";
    }
    return 0;
}