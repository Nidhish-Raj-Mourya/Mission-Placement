#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    if(age>=18 and age<=100){
        cout<<"They are eligible ";
    }
    else if(age<18){
        cout<<"They are not eligible ";
    }
    else{
        cout<<"They are dead";
    }
}