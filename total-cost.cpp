#include<iostream>
using namespace std;
int main(){
    int price,quantity,taxPercentage,subTotal,taxAmount,finalAmount;
    cout<<"Enter price : ";
    cin>>price;
    cout<<"Enter quantity : ";
    cin>>quantity;
    cout<<"Enter tax percentage : ";
    cin>>taxPercentage;

    subTotal=price*quantity;
    cout<<subTotal<<endl;

    taxAmount=(subTotal*taxPercentage)/100;
    cout<<taxAmount<<endl;
    
    finalAmount=subTotal+taxAmount;
    cout<<finalAmount<<endl;

}