#include<iostream>
using namespace std;
int main(){
    char input;
    int ascii;
    cout<<"Enter character between A-Z";
    cin>>input;
    ascii=int(input);
    if(65<=ascii&&ascii<=77){
        cout<<"it lies in first half";
    }
    else if(78<=ascii&&ascii<=90)
    {
        cout<<"it lies in second half";
    }
     if(97<=ascii&&ascii<=109){
        cout<<"it lies in first half";
    }
    else if(110<=ascii&&ascii<=122)
    {
        cout<<"it lies in second half";
    }

    return 0;
}