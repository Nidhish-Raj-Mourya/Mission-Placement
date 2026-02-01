#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter one number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;
    cout<<"enter third number";
    cin>>num3;
    if(num1<num2&&num1<num3){
        cout<<"number "<<num1<<" is smallest";
    }
    else if(num2<num3){
        cout<<"number "<<num2<<" is smallest";
    }
    else{
        cout<<"number "<<num3<<" is smallest";
    }
    return 0;
}