#include<iostream>
using namespace std;
int main(){
    float Amount,discount1,discount2,actualAmount,member;
    cout<<"Enter the Amount : ";
    cin>>Amount;
    cout<<"Enter the is a member or not : ";
    cin>>member;
    if(Amount>=10000){
        if(member==1){
            discount1=(Amount*20)/100;
            discount2=(Amount*5)/100;
            actualAmount=Amount-discount1-discount2;
            cout<<actualAmount;
        }
        else{
            discount1=(Amount*20)/100;
            actualAmount=Amount-discount1;
            cout<<actualAmount;
        }
    }
    else if(Amount>=5000){
        if(member==1){
            discount1=(Amount*15)/100;
            discount2=(Amount*5)/100;
            actualAmount=Amount-discount1-discount2;
            cout<<actualAmount;
        }
        else{
            discount1=(Amount*15)/100;
            actualAmount=Amount-discount1;
            cout<<actualAmount;
        }
    }
    else if(Amount>=2000){
        if(member==1){
            discount1=(Amount*10)/100;
            discount2=(Amount*5)/100;
            actualAmount=Amount-discount1-discount2;
            cout<<actualAmount;
        }
        else{
            discount1=(Amount*10)/100;
            actualAmount=Amount-discount1;
            cout<<actualAmount;
        }
    }
    else{
        if(member==1){
            discount1=(Amount*0)/100;
            discount2=(Amount*5)/100;
            actualAmount=Amount-discount1-discount2;
            cout<<actualAmount;
        }
        else{
            discount1=(Amount*0)/100;
            actualAmount=Amount-discount1;
            cout<<actualAmount;
        }
    }
}