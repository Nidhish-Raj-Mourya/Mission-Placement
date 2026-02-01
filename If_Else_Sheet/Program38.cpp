#include<iostream>
using namespace std;
int main(){
    float purchaseAmount,totalBill;
    cout<<"Enter purchase Amount";
    cin>>purchaseAmount;
    int member,discountPercent;
    cout<<"If you are a member press 1";
    cin>>member;
    if(member==1){
        discountPercent=5;
    }
    else{
        discountPercent=0;
    }
    if(purchaseAmount>10000){
        discountPercent+=20;
        totalBill=purchaseAmount+((purchaseAmount*discountPercent)/100);
        cout<<"the total bill is "<<totalBill;
    }
    else if(purchaseAmount>5000){
        discountPercent+=15;
        totalBill=purchaseAmount+((purchaseAmount*discountPercent)/100);
        cout<<"the total bill is "<<totalBill;
    }
    else if(purchaseAmount>2000){
        discountPercent+=10;
        totalBill=purchaseAmount+((purchaseAmount*discountPercent)/100);
        cout<<"the total bill is "<<totalBill;
    }
    else{
        cout<<"No Discount Applicable";
    }

}