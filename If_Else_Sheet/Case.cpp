#include<iostream>
using namespace std;
int main(){
    char input;
    int ascii;
    cout<<"Enter character";
    cin>>input;
    ascii=int(input);
    if(65<=ascii &&ascii<=90){
        cout<<"Uppercase A-Z";
    }
    if(97<=ascii&&ascii<=120){
        cout<<"it is LowerCase a-z";
    }
}