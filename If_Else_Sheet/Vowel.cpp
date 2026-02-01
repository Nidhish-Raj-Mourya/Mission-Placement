#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"Enter character";
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='O'||a=='U'){
        cout<<"it is vowel";
    }
    else{
        cout<<"it is consonent";
    }
    return 0;
}