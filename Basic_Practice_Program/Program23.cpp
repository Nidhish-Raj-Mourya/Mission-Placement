#include<iostream>
using namespace std;
int main(){
    float price,quantity,taxPercent,subTotal,tax,finalTotal;
    cout<<"Enter price ";
    cin>>price;
    cout<<"Enter quantity ";
    cin>>quantity;
    cout<<"Enter tax Percent ";
    cin>>taxPercent;
    subTotal=price*quantity;
    cout<<"The Subtotal is "<<subTotal<<"\n";
    tax=(subTotal*taxPercent)/100.0;
    cout<<"The tax is "<<tax<<"\n";
    finalTotal=subTotal+tax;
    cout<<"The total is "<<finalTotal<<"\n";
    return 0;
}