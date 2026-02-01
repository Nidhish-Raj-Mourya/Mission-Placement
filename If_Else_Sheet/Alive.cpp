#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age";
    cin>>age;
    if(age>=18){
        cout<<"you are eligible";
    }
    else
    {
        cout<<"you are not eligible";
    }
    return 0;
}