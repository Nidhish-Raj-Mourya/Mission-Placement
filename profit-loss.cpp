#include<iostream>
using namespace std;
int main(){
    int costPrice,sellingPrice,amount,profit,loss;
    cout<<"Enter the cost price : ";
    cin>>costPrice;
    cout<<"Enter the selling price : ";
    cin>>sellingPrice;
    if(costPrice>sellingPrice){
        cout<<"Loss"<<endl;
        loss=costPrice-sellingPrice;
        amount=costPrice-loss;
        cout<<"The amount is : "<<amount;
    }
    else{
        cout<<"profit"<<endl;
        profit=sellingPrice=costPrice;
        amount=costPrice+profit;
        cout<<"The amount is : "<<amount;
    }

}