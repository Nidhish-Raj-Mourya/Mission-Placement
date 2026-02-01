#include<iostream>
using namespace std;
int main(){
    int grade;
    cout<<"Enter the grades ";
    cin>>grade;
    if(grade>=90 and grade<=100){
        cout<<"Grade A ";
    }
    else if(grade>=80 and grade<=89){
        cout<<"Grade B ";
    }
    else if(grade>=70 and grade<=79){
        cout<<"Grade C ";
    }
    else if(grade>=60 and grade<=69){
        cout<<"Grade D ";
    }
    else if(grade>=40 and grade<=59){
        cout<<"Grade E ";
    }
    else{
        cout<<"Grade F ";
    }

}