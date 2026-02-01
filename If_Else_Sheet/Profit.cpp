#include<iostream>
using namespace std;
int main(){
    float costPrice,sellingPrice,profit,loss;
    cout<<"Enter Cost Price";
    cin>>costPrice;
    cout<<"Enter Selling Price";
    cin>>sellingPrice;
    if(costPrice<sellingPrice){
        profit=sellingPrice-costPrice;
        cout<<"it is profit of "<<profit;
    }
    if(sellingPrice<costPrice){
        loss=costPrice-sellingPrice;
        cout<<"is is loss of "<<loss;
    }
    if(sellingPrice==costPrice){
        cout<<"There is no profit nor loss";
    }
    return 0;
}